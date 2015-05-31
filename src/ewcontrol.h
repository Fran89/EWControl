#ifndef EWCONTROL_H
#define EWCONTROL_H

#include <QMainWindow>
#include <QTextStream>
#include <QStandardItemModel>
#include <QTimer>
#include <QLabel>
#include <QThread>
#include <QTime>

extern "C" {
    #include "transport.h"
}

namespace Ui {
class ewcontrol;
}

class ewcontrol : public QMainWindow
{
    Q_OBJECT

public:
    explicit ewcontrol(QWidget *parent = 0);
    ~ewcontrol();

private slots:
    void on_actionConnect_triggered();
    void on_actionDisconnect_triggered();
    void on_actionDebug_triggered();
    void on_actionQuit_triggered();
    void on_StopMod_clicked();
    void on_refresh_clicked();
    void on_ResMod_clicked();
    void on_ReconfEW_clicked();
    int beginauto();
    int begin();

    void on_actionAutoUpdate_triggered();

private:
    Ui::ewcontrol *ui;
    QLabel *status;
    int redirect;
    bool connected;
    bool autoup;
    bool Debug;

    QStandardItemModel *mod;

    SHM_INFO   region;                /* The shared memory region   */
    MSG_LOGO   logo;

    unsigned char InstId;      /* local installation id      */
    unsigned char MyModId;
    unsigned char TypeReqStatus;
    unsigned char TypeStatus;
    unsigned char TypeReconfig;
    unsigned char TypeRestart;
    unsigned char TypeStop;
    int ringKey;
    int numring;

    void SendstopRequest( char* );
    void SendRestartRequest( char* );
    void SendReconfigRequest( void );
    void SendStatusRequest( void );
    void PrintStatusReport( void );
    void ReadRingName(char*, char*);
    int connectToEw();
    int disconnectFromEw();
    void appendlog(QString);
    void updateSta(QString);
    void decryptStatus(QByteArray message);
    void colortable();

    QTimer *Time;
};

#endif // EWCONTROL_H
