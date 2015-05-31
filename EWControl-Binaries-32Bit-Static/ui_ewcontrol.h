/********************************************************************************
** Form generated from reading UI file 'ewcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EWCONTROL_H
#define UI_EWCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ewcontrol
{
public:
    QAction *actionConnect;
    QAction *actionRefresh;
    QAction *actionDisconnect;
    QAction *actionDebug;
    QAction *actionQuit;
    QAction *actionAutoUpdate;
    QAction *actionHelp;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *HostOS;
    QLabel *label_3;
    QLabel *StartT;
    QLabel *label_4;
    QLabel *CurrT;
    QLabel *label_9;
    QLabel *DiskS;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLabel *LogDir;
    QLabel *label;
    QLabel *ParamDir;
    QLabel *label_7;
    QLabel *BinDir;
    QLabel *label_8;
    QLabel *StStpVer;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *refresh;
    QSpacerItem *horizontalSpacer;
    QPushButton *StopMod;
    QPushButton *ResMod;
    QPushButton *ReconfEW;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuSystem;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ewcontrol)
    {
        if (ewcontrol->objectName().isEmpty())
            ewcontrol->setObjectName(QStringLiteral("ewcontrol"));
        ewcontrol->resize(720, 542);
        actionConnect = new QAction(ewcontrol);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionRefresh = new QAction(ewcontrol);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        actionDisconnect = new QAction(ewcontrol);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        actionDebug = new QAction(ewcontrol);
        actionDebug->setObjectName(QStringLiteral("actionDebug"));
        actionQuit = new QAction(ewcontrol);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAutoUpdate = new QAction(ewcontrol);
        actionAutoUpdate->setObjectName(QStringLiteral("actionAutoUpdate"));
        actionHelp = new QAction(ewcontrol);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        centralWidget = new QWidget(ewcontrol);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        HostOS = new QLabel(centralWidget);
        HostOS->setObjectName(QStringLiteral("HostOS"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, HostOS);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        StartT = new QLabel(centralWidget);
        StartT->setObjectName(QStringLiteral("StartT"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, StartT);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        CurrT = new QLabel(centralWidget);
        CurrT->setObjectName(QStringLiteral("CurrT"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, CurrT);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        DiskS = new QLabel(centralWidget);
        DiskS->setObjectName(QStringLiteral("DiskS"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, DiskS);


        horizontalLayout_2->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        LogDir = new QLabel(centralWidget);
        LogDir->setObjectName(QStringLiteral("LogDir"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, LogDir);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label);

        ParamDir = new QLabel(centralWidget);
        ParamDir->setObjectName(QStringLiteral("ParamDir"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, ParamDir);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_7);

        BinDir = new QLabel(centralWidget);
        BinDir->setObjectName(QStringLiteral("BinDir"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, BinDir);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_8);

        StStpVer = new QLabel(centralWidget);
        StStpVer->setObjectName(QStringLiteral("StStpVer"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, StStpVer);


        horizontalLayout_2->addLayout(formLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        refresh = new QPushButton(centralWidget);
        refresh->setObjectName(QStringLiteral("refresh"));

        horizontalLayout->addWidget(refresh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        StopMod = new QPushButton(centralWidget);
        StopMod->setObjectName(QStringLiteral("StopMod"));

        horizontalLayout->addWidget(StopMod);

        ResMod = new QPushButton(centralWidget);
        ResMod->setObjectName(QStringLiteral("ResMod"));

        horizontalLayout->addWidget(ResMod);

        ReconfEW = new QPushButton(centralWidget);
        ReconfEW->setObjectName(QStringLiteral("ReconfEW"));

        horizontalLayout->addWidget(ReconfEW);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 80));

        verticalLayout->addWidget(textBrowser);

        ewcontrol->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ewcontrol);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 25));
        menuSystem = new QMenu(menuBar);
        menuSystem->setObjectName(QStringLiteral("menuSystem"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        ewcontrol->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ewcontrol);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ewcontrol->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ewcontrol);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ewcontrol->setStatusBar(statusBar);

        menuBar->addAction(menuSystem->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuSystem->addAction(actionConnect);
        menuSystem->addAction(actionAutoUpdate);
        menuSystem->addAction(actionDisconnect);
        menuSystem->addSeparator();
        menuSystem->addAction(actionQuit);
        menuHelp->addAction(actionDebug);
        menuHelp->addAction(actionHelp);

        retranslateUi(ewcontrol);

        QMetaObject::connectSlotsByName(ewcontrol);
    } // setupUi

    void retranslateUi(QMainWindow *ewcontrol)
    {
        ewcontrol->setWindowTitle(QApplication::translate("ewcontrol", "ewcontrol", 0));
        actionConnect->setText(QApplication::translate("ewcontrol", "Connect", 0));
        actionRefresh->setText(QApplication::translate("ewcontrol", "Refresh", 0));
        actionDisconnect->setText(QApplication::translate("ewcontrol", "Disconnect", 0));
        actionDebug->setText(QApplication::translate("ewcontrol", "Debug", 0));
        actionQuit->setText(QApplication::translate("ewcontrol", "Quit", 0));
        actionAutoUpdate->setText(QApplication::translate("ewcontrol", "AutoUpdate", 0));
        actionHelp->setText(QApplication::translate("ewcontrol", "Help", 0));
        label_6->setText(QApplication::translate("ewcontrol", "EARTHWORM SYSTEM STATUS", 0));
        label_2->setText(QApplication::translate("ewcontrol", "Hostname-OS:", 0));
        HostOS->setText(QString());
        label_3->setText(QApplication::translate("ewcontrol", "Start time (UTC):", 0));
        StartT->setText(QString());
        label_4->setText(QApplication::translate("ewcontrol", "Current time (UTC):", 0));
        CurrT->setText(QString());
        label_9->setText(QApplication::translate("ewcontrol", "Disk Space Availible:", 0));
        DiskS->setText(QString());
        label_5->setText(QApplication::translate("ewcontrol", "Startstop's Log Dir:", 0));
        LogDir->setText(QString());
        label->setText(QApplication::translate("ewcontrol", "Startstop's Params Dir: ", 0));
        ParamDir->setText(QString());
        label_7->setText(QApplication::translate("ewcontrol", "Startstop's Bin Dir:", 0));
        BinDir->setText(QString());
        label_8->setText(QApplication::translate("ewcontrol", "Startstop Version:", 0));
        StStpVer->setText(QString());
        refresh->setText(QApplication::translate("ewcontrol", "Refresh", 0));
        StopMod->setText(QApplication::translate("ewcontrol", "Stop Module", 0));
        ResMod->setText(QApplication::translate("ewcontrol", "Restart Module", 0));
        ReconfEW->setText(QApplication::translate("ewcontrol", "Reconfigure EW", 0));
        menuSystem->setTitle(QApplication::translate("ewcontrol", "System", 0));
        menuHelp->setTitle(QApplication::translate("ewcontrol", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class ewcontrol: public Ui_ewcontrol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EWCONTROL_H
