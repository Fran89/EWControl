/********************************************************************************
** Form generated from reading UI file 'aboutme.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTME_H
#define UI_ABOUTME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutMe
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutMe)
    {
        if (AboutMe->objectName().isEmpty())
            AboutMe->setObjectName(QStringLiteral("AboutMe"));
        AboutMe->resize(721, 417);
        verticalLayout = new QVBoxLayout(AboutMe);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AboutMe);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(AboutMe);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(AboutMe);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutMe);

        QMetaObject::connectSlotsByName(AboutMe);
    } // setupUi

    void retranslateUi(QDialog *AboutMe)
    {
        AboutMe->setWindowTitle(QApplication::translate("AboutMe", "Dialog", 0));
        label->setText(QApplication::translate("AboutMe", "EWControl", 0));
        textBrowser->setHtml(QApplication::translate("AboutMe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:xx-large; font-weight:600; color:#333333;\">EWControl</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">This small graphical user interface attaches itself to earthworm and allows you to control the modules from a GUI. It can be used to stop, resta"
                        "rt, and reconfigure EW. It has the ability to automatically refresh as well as manual refresh at the press of a button.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"user-content-installation\"></a><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:x-large; font-weight:600; color:#333333;\">I</span><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:x-large; font-weight:600; color:#333333;\">nstallation</span></p>\n"
"<ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" ma"
                        "rgin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">This module requires the lastes version of a 32 Bit QT (</span><a href=\"https://www.qt.io/download/\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; text-decoration: underline; color:#4183c4; background-color:transparent;\">https://www.qt.io/download/</span></a><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">) to be availible. If you wish to compile it, use the &quot;-xplatform linux-g++-32&quot; flag when configuring QT.</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesa"
                        "ns, sans-serif'; font-size:12pt; color:#333333;\">After running the enviorment/ew_params.bash</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">cd into the /src</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">qmake</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">make</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">make install</span></li></ol>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">That should be all that is required. Alternatively a statically compiled version is provided, just move the ewcontrol to the /bin folder.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"user-content-us"
                        "e\"></a><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:x-large; font-weight:600; color:#333333;\">U</span><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:x-large; font-weight:600; color:#333333;\">se</span></p>\n"
"<ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Add the MOD_GUISTATUS to the modules in earthworm.d</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">run ewcontrol</s"
                        "pan> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Go to the system menu and hit connect ( 30s after a succesfull conection it should show the status, alternatively you can manually refresh)</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Activate Auto Update if desired.</span></li></ol>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\"><br /></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"user-content-to-do\"></a><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:x-large; font-weight:600; color:#333333;\">T</span><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:x-large; font-weight:600; color:#333333;\">o do:</span></p>\n"
"<ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Maybe add the ability to change configuration files.</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" f"
                        "ont-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Sense changes in configuration files and auto restart the proccesses.</span> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Add other statistics.</span></li></ol>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px; font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">If anyone"
                        " is interested in this proyect or would like to help, contact me!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"user-content-credits\"></a><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-weight:600; color:#777777;\">C</span><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-weight:600; color:#777777;\">redits:</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">The people over at Instrumental Software Technologies, Inc. (ISTI) @ </span><a href=\"http://www.isti.com/\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; text-decoration: underline; color:#4183c4; background-color:transparent;\">http://www.isti.com/</span></a> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Everyone who has ever worked with in the development of earthworm @</span><a href=\"http://earthwormcentral.org/\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; text-decoration: underline; color:#4183c4; background-color:transparent;\">h"
                        "ttp://earthwormcentral.org</span></a> </li>\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">The QT Community @ </span><a href=\"http://qt-project.org/\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; text-decoration: underline; color:#4183c4; background-color:transparent;\">http://qt-project.org/</span></a></li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Thanks,</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetic"
                        "a Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\">Francisco J Hernandez.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica Neue, Helvetica, Segoe UI, Arial, freesans, sans-serif'; font-size:12pt; color:#333333;\"><br /></p></body></html>", 0));
        pushButton->setText(QApplication::translate("AboutMe", "Ok, Thanks!", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutMe: public Ui_AboutMe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTME_H
