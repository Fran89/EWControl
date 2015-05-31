#include "ewcontrol.h"
#include "ui_ewcontrol.h"

extern "C"{
    #include "earthworm.h"
    #include "kom.h"
    #include "startstop_unix_generic.h"
    #define MAX_BYTES_STATUS MAX_BYTES_PER_EQ
}

ewcontrol::ewcontrol(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ewcontrol)
{
    ui->setupUi(this);
    ui->mainToolBar->hide();
    this->setWindowTitle("EWControl");
    ui->textBrowser->hide();
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    Debug = false;
    mod = new QStandardItemModel(1,5);
    connected = false;
    numring = 0;
    Time = new QTimer;
    Time->setSingleShot(true);
    connect(Time, SIGNAL(timeout()),this,SLOT(beginauto()));
    autoup = false;
    status = new QLabel;
    ui->statusBar->addWidget(status);
}

ewcontrol::~ewcontrol()
{
    delete ui;
}

/************************************************************
 *                   SendstopRequest                     *
 *  To send a message requesting the stoping of a module *
 ************************************************************/
void ewcontrol::SendstopRequest( char*  modPid ) /* pid of module as ascii string*/ {
    MSG_LOGO logo;
    char message[512];

    /* Build message
    *************/
    strcpy (message,modPid);
    strcat( message, "\n\0" );

    /* Set logo values of pager message
    ********************************/
    logo.type   = TypeStop;
    logo.mod    = MyModId;
    logo.instid = InstId;

    /* Send stop message to transport ring
    **************************************/
    if ( tport_putmsg( &region, &logo, strlen(message), message ) != PUT_OK )
        appendlog("stop: Error sending message to transport region.\n" );

    return;

}

/************************************************************
 *                   SendRestartRequest                     *
 *  To send a message requesting the restarting of a module *
 ************************************************************/
void ewcontrol::SendRestartRequest( char*  modPid ) /* pid of module as ascii string*/
{
 MSG_LOGO logo;
 char message[512];

/* Build message
 *************/
 strcpy (message,modPid);
 strcat( message, "\n\0" );

/* Set logo values of pager message
 ********************************/
 logo.type   = TypeRestart;
 logo.mod    = MyModId;
 logo.instid = InstId;

/* Send restart message to transport ring
 **************************************/
 if ( tport_putmsg( &region, &logo, strlen(message), message ) != PUT_OK )
    appendlog("restart: Error sending message to transport region.\n" );

 return;

}

/************************************************************
 *                    SendReconfigRequest                     *
 * To send a message requesting the Earthworm system status *
 ************************************************************/
void ewcontrol::SendReconfigRequest( void )
{
 char message[16];
 MSG_LOGO rlogo;
 long     rlen;

/* Flush all old messages in the ring
 **********************************/
 logo.type   = TypeReconfig;
 logo.mod    = 0;
 logo.instid = InstId;
 while( tport_getmsg( &region, &logo, 1,
                      &rlogo, &rlen, message, (long)16 ) != GET_NONE );

/* Build status request message
 ****************************/
 sprintf(message,"reconfigure\n" );

/* Set logo values of message
 **************************/
 logo.type   = TypeReconfig;
 logo.mod    = MyModId;
 logo.instid = InstId;

/* Send status message to transport ring
 **************************************/
 if ( tport_putmsg( &region, &logo, strlen(message), message ) != PUT_OK )
     appendlog("status: Error sending message to transport region.\n" );

 return;

}

/************************************************************
 *                    PrintStatusReport                     *
 *   Get the Earthworm status message from shared memory.   *
 *   Print it to the screen.                                *
 ************************************************************/
void ewcontrol::PrintStatusReport( void )
{
    char     msg[MAX_BYTES_STATUS];
    MSG_LOGO rlogo;
    long     rlen;
    int      timeout=10;
    int      rc;
    int      i;

    /* Set logo values of message
    **************************/
    logo.type   = TypeStatus;
    logo.mod    = 0;           /* zero is the wildcard */
    logo.instid = InstId;

    for(i=1; i<timeout; i++) {
        rc = tport_getmsg( &region, &logo, 1,
        &rlogo, &rlen, msg, (long)MAX_BYTES_STATUS-1 );
        if( rc == GET_NONE   )  {
            sleep_ew( 1000 );
            continue;
        }
        if( rc == GET_TOOBIG ) {
            appendlog("Earthworm is running, but the status msg is too big for me!\n" );
            return;
        }
        else {
            msg[rlen]='\0';  /* null terminate the message */
            QByteArray message;
            //fprintf( stdout, "%s\n", msg );
            QTime now;
            updateSta("Updated on " + now.currentTime().toString());
            message = QByteArray(msg,rlen);
            appendlog(message);
            decryptStatus(message);
            return;
        }
    }

    /* If you got here, you timed out
    ********************************/
    appendlog(QString("Earthworm may be hung; no response from startstop in ") + QString(timeout) + QString("seconds.\n"));
    return;
}

/************************************************************
 *                    SendStatusRequest                     *
 * To send a message requesting the Earthworm system status *
 ************************************************************/
void ewcontrol::SendStatusRequest( void )
{
 char message[16];
 MSG_LOGO rlogo;
 long     rlen;

/* Flush all old messages in the ring
 **********************************/
 logo.type   = TypeStatus;
 logo.mod    = 0;
 logo.instid = InstId;
 while( tport_getmsg( &region, &logo, 1,
                      &rlogo, &rlen, message, (long)16 ) != GET_NONE );

/* Build status request message
 ****************************/
 sprintf(message,"%d\n", MyModId );

/* Set logo values of message
 **************************/
 logo.type   = TypeReqStatus;
 logo.mod    = MyModId;
 logo.instid = InstId;

/* Send status message to transport ring
 **************************************/
 if ( tport_putmsg( &region, &logo, strlen(message), message ) != PUT_OK )
    appendlog("status: Error sending message to transport region.\n");
 return;
}

/*************************************************************
 *                      ReadRingName                         *
 * Read startstop's configfile as far as the first ring name *
 *************************************************************/
void ewcontrol::ReadRingName(char *ringname, char *configFile)
{
 int        nfiles;
 char      *com, *str;
 char       configfile[20];

 strcpy( configfile, "none" );

 nfiles = k_open( configFile );
 if ( nfiles == 0 )
 {
      printf( "status: Error opening file <%s>. Exiting.\n",
               configFile );
      exit( -1 );
 }

/* Process Ring commands from startstop's command file
 ***************************************************/
 while(nfiles > 0)          /* While there are command files open */
 {
      while(k_rd())         /* Read next line from active file  */
      {
         com = k_str();    /* Get the first token from line */

      /* Ignore blank lines & comments
         *****************************/
         if( !com )           continue;
         if( com[0] == '#' )  continue;

      /* Process only 1st Ring command
         *****************************/
         if( k_its( "Ring" ) )
         {
              str = k_str();
              strcpy( ringname, str );
              break;
         }
         if( k_its( "nRing") ) {
             numring = k_int();
         }

      /* See if there were any errors processing this command
         ****************************************************/
         if( k_err() )
         {
             printf( "status: Bad <%s> command in <%s>. Exiting.\n",
                      com, configfile );
             return;
         }
      }
      nfiles = k_close();
 }

 return;
}

/************************************************************
 *                    Begin the Report                      *
 * Should be a slot to be opened by a timer or something    *
 ************************************************************/
int ewcontrol::begin() {
   SendStatusRequest();
   updateSta(" Manually sent request for status; waiting for response..." );
   PrintStatusReport();
   return 0;
}
int ewcontrol::beginauto() {
   SendStatusRequest();
   updateSta("Automatically sent request for status; waiting for response..." );
   PrintStatusReport();
   return 0;
}

/************************************************************
 *               Connect to Earthworm                       *
 * Should be used to connect to earthworm                   *
 * *********************************************************/
int ewcontrol::connectToEw() {
    // Set Stuff
    char *runPath;
    char  ringname[MAX_RING_STR];
    char configFile[FILENAME_MAX] = DEF_CONFIG;

    appendlog(QString("using default config file: ") + QString(configFile) + "\n");

    /* Change working directory to environment variable EW_PARAMS value
    *********************************************************************/
    runPath = getenv( "EW_PARAMS" );

    if ( runPath == NULL ) {
        appendlog("status: Environment variable EW_PARAMS not defined.");
        appendlog(" Exiting.\n");
        return -1;
    }

    if ( *runPath == '\0' ) {
        appendlog("status: Environment variable EW_PARAMS ");
        appendlog("defined, but has no value. Exiting.\n");
        return -1;
    }

    if ( chdir_ew( runPath ) == -1 ) {
        appendlog(QString("status: Params directory not found: ") + QString(runPath) + "\n");
        appendlog(QString("status: Reset environment variable EW_PARAMS."));
        appendlog(QString("Exiting.\n"));
        return -1;
    }

      /* Look up ids in earthworm.d tables
       ***********************************/
    if ( GetLocalInst( &InstId ) != 0 ) {
        appendlog("status: error getting local installation id; exiting!\n");
        return -1;
    }

    if ( GetModId( "MOD_GUISTATUS", &MyModId ) != 0 ) {
        appendlog("status: Invalid module id <MOD_STATUS> exiting!\n");
        return -1;
    }

    if ( GetType( "TYPE_REQSTATUS", &TypeReqStatus ) != 0 ) {
        appendlog("status: Invalid message type <TYPE_REQSTATUS> exiting!\n");
        return -1;
    }
    if ( GetType( "TYPE_STATUS", &TypeStatus ) != 0 ) {
        appendlog("status: Invalid message type <TYPE_STATUS> exiting!\n" );
        return -1;
    }
    if ( GetType( "TYPE_STOP", &TypeStop ) != 0 ) {
        appendlog("stopmodule: Invalid message type <TYPE_STOP> exiting!\n" );
        return -1;
    }
    if ( GetType( "TYPE_RESTART", &TypeRestart ) != 0 ) {
       appendlog("restart: Invalid message type <TYPE_RESTART> exiting!\n" );
       return -1;
    }
    if ( GetType( "TYPE_RECONFIG", &TypeReconfig ) != 0 )
    {
       appendlog("reconfigure: Invalid message type <TYPE_RECONFIG> exiting!\n" );
       return -1;
    }

    /* Read startstop's config file to find a valid transport ring name
    ******************************************************************/
    ReadRingName( ringname, configFile );

    if( (ringKey = GetKey(ringname)) == -1 ) {
        appendlog(QString("status: Invalid ring name ") + QString(ringname)+ QString(" Exiting.\n"));
        return -1;
    }

    /* Attach to shared memory ring
    *****************************/
    appendlog(QString("NOTE: If next line reads \"ERROR: tport_attach...\","
                      " Earthworm is not running.\n"));
    tport_attach( &region, ringKey );
    updateSta("Successful Connection");
    appendlog("Successful Connection");
    if(!autoup){
        Time->setInterval(30000);
        Time->start();
    }
    connected = true;
    return 0;
}

/************************************************************
 *               Disconnect From Earthworm                  *
 * Should be used to disconnect to earthworm                *
 * *********************************************************/
int ewcontrol::disconnectFromEw(){
    if (connected){
        tport_detach( &region );
        updateSta("Successful Disconnection");
        appendlog("Successful Disconnection");
        return 0;
    } else {
        updateSta("Not Connected");
        appendlog("Not Connected");
        return 0;
    }
}

void ewcontrol::appendlog(QString text){
    ui->textBrowser->append(text);
}

void ewcontrol::updateSta(QString text){
    if(autoup){
        status->setText(text + " | Auto-Update is ON");
        ui->statusBar->update();
    } else {
        status->setText(text + " | Auto-Update is OFF");
        ui->statusBar->update();
    }
}

void ewcontrol::decryptStatus(QByteArray message){
    int skip = 13;
    skip += numring;
    QTextStream msg(message);
    int i=0;
    mod->clear();
    mod->setHorizontalHeaderItem(0, new QStandardItem("Proccess Name"));
    mod->setHorizontalHeaderItem(1, new QStandardItem("Proccess ID"));
    mod->setHorizontalHeaderItem(2, new QStandardItem("Status"));
    mod->setHorizontalHeaderItem(3, new QStandardItem("Class / Priority"));
    mod->setHorizontalHeaderItem(4, new QStandardItem("CPU Time"));
    mod->setHorizontalHeaderItem(5, new QStandardItem("Arguments"));
    while (!msg.atEnd()) {
        QString line = msg.readLine();
        QStringList tmp;
        if(i < skip){
            if (i==2){
                tmp = line.split(':');
                ui->HostOS->setText(tmp.last().trimmed());
                tmp.clear();
            }
            if (i==3){
                tmp = line.split(':');
                tmp.pop_front();
                ui->StartT->setText(tmp.join(':').trimmed());
                tmp.clear();
            }
            if (i==4){
                tmp = line.split(':');
                tmp.pop_front();
                ui->CurrT->setText(tmp.join(':').trimmed());
                tmp.clear();
            }
            if (i==5){
                tmp = line.split(":");
                ui->DiskS->setText(tmp.last().trimmed());
                tmp.clear();
            }
            if (i==(6+numring)){
                tmp = line.split(':');
                ui->LogDir->setText(tmp.last().trimmed());
                tmp.clear();
            }
            if (i==(7+numring)){
                tmp = line.split(':');
                ui->ParamDir->setText(tmp.last().trimmed());
                tmp.clear();
            }
            if (i==(8+numring)){
                tmp = line.split(':');
                ui->BinDir->setText(tmp.last().trimmed());
                tmp.clear();
            }
            if (i==(9+numring)){
                tmp = line.split(':');
                ui->StStpVer->setText(tmp.last().trimmed());
                tmp.clear();
            }
        }
        else if (i > skip){
            QList<QStandardItem*> temp;
            temp.append(new QStandardItem(line.left(16).trimmed()));
            temp.append(new QStandardItem(line.left(25).right(9).trimmed()));
            temp.append(new QStandardItem(line.left(33).right(8).trimmed()));
            temp.append(new QStandardItem(line.left(43).right(10).trimmed()));
            temp.append(new QStandardItem(line.left(52).right(9).trimmed()));
            temp.append(new QStandardItem(line.remove(0,52).trimmed()));

            mod->appendRow(temp);
            colortable();
        }
        i++;
    }
    ui->tableView->setModel(mod);
    ui->tableView->resizeColumnsToContents();
}

void ewcontrol::colortable(){
    int rows;
    rows = mod->rowCount();
    for (int i=0; i < rows; i++){
        if(mod->item(i,2)->text() == "Alive")
            mod->item(i,2)->setBackground(QBrush(Qt::green));
        else
            mod->item(i,2)->setBackground(QBrush(Qt::red));
    }

}

// GUI Functions
void ewcontrol::on_actionConnect_triggered()
{
    connectToEw();
}

void ewcontrol::on_actionDisconnect_triggered()
{
    disconnectFromEw();
}

void ewcontrol::on_actionDebug_triggered()
{
    if(Debug){
        ui->textBrowser->hide();
        Debug = false;
    } else if (!Debug) {
        ui->textBrowser->show();
        Debug = true;
    }

}

void ewcontrol::on_actionQuit_triggered()
{
    qApp->quit();
}

void ewcontrol::on_refresh_clicked()
{
   begin();
}

void ewcontrol::on_StopMod_clicked() {
    QItemSelectionModel *select = ui->tableView->selectionModel();
    if(select->hasSelection()){
        QModelIndexList temp;
        temp = select->selectedRows(1);
        appendlog(temp.first().data().toString());
        SendstopRequest(temp.first().data().toString().toLatin1().data());
        temp.clear();
        temp = select->selectedRows(0);
        updateSta("Stop command for "+ temp.first().data().toString() + " has been sent.");
    }
    if (!autoup){
        Time->setInterval(30000);
        Time->start();
    }
}

void ewcontrol::on_ResMod_clicked() {
    QItemSelectionModel *select = ui->tableView->selectionModel();
    if(select->hasSelection()){
        QModelIndexList temp;
        temp = select->selectedRows(1);
        appendlog(temp.first().data().toString());
        SendRestartRequest(temp.first().data().toString().toLatin1().data());
        temp.clear();
        temp = select->selectedRows(0);
        updateSta("Restart command for "+ temp.first().data().toString() + " has been sent.");
    }
    if (!autoup){
        Time->setInterval(30000);
        Time->start();
    }
}

void ewcontrol::on_ReconfEW_clicked()
{
    SendReconfigRequest();
    updateSta("Reconfiguring Earthworm");
    if (!autoup){
        Time->setInterval(30000);
        Time->start();
    }
}

void ewcontrol::on_actionAutoUpdate_triggered()
{
    if(autoup){
        autoup = false;
        Time->stop();
        Time->setSingleShot(true);
        updateSta("Auto-Update has been changed");
    } else {
        autoup = true;
        Time->setSingleShot(false);
        Time->setInterval(50000);
        Time->start();
        updateSta("Auto-Update has been changed");
    }
}

void ewcontrol::on_actionHelp_triggered()
{
    Help.show();
}
