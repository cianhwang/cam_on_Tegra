/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_FocusMode;
    QPushButton *pushButton_FocusApply;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_Direct;
    QRadioButton *radioButton_Infinity;
    QRadioButton *radioButton_Macro;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_AF_On;
    QPushButton *pushButton_AF_Off;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_FocusPosition;
    QGroupBox *groupBox_OIS_Mode;
    QWidget *layoutWidget4;
    QFormLayout *formLayout;
    QRadioButton *radioButton_OIS_Mode0;
    QRadioButton *radioButton_OIS_Mode3;
    QRadioButton *radioButton_OIS_Mode1;
    QRadioButton *radioButton_OIS_Mode4;
    QRadioButton *radioButton_OIS_Mode2;
    QRadioButton *radioButton_OIS_Mode5;
    QPushButton *pushButton_OIS_Apply;
    QCheckBox *checkBox_LSC;
    QGroupBox *groupBox_StillCapture;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Still12M_NML;
    QPushButton *pushButton_Still12M_HDR;
    QGroupBox *groupBox_Highspeed;
    QPushButton *pushButton_Highspeed;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(423, 462);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_FocusMode = new QGroupBox(centralWidget);
        groupBox_FocusMode->setObjectName(QString::fromUtf8("groupBox_FocusMode"));
        groupBox_FocusMode->setGeometry(QRect(10, 30, 401, 171));
        groupBox_FocusMode->setStyleSheet(QString::fromUtf8("QGroupBox {border:1px solid gray; border-radius:5px; margin-top:1ex;}QGroupBox::title{subcontrol-origin:margin; subcontrol-position:top left; padding:0 0px;}"));
        pushButton_FocusApply = new QPushButton(groupBox_FocusMode);
        pushButton_FocusApply->setObjectName(QString::fromUtf8("pushButton_FocusApply"));
        pushButton_FocusApply->setGeometry(QRect(300, 80, 85, 31));
        layoutWidget1 = new QWidget(groupBox_FocusMode);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 82, 92));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_Direct = new QRadioButton(layoutWidget1);
        radioButton_Direct->setObjectName(QString::fromUtf8("radioButton_Direct"));

        verticalLayout->addWidget(radioButton_Direct);

        radioButton_Infinity = new QRadioButton(layoutWidget1);
        radioButton_Infinity->setObjectName(QString::fromUtf8("radioButton_Infinity"));

        verticalLayout->addWidget(radioButton_Infinity);

        radioButton_Macro = new QRadioButton(layoutWidget1);
        radioButton_Macro->setObjectName(QString::fromUtf8("radioButton_Macro"));

        verticalLayout->addWidget(radioButton_Macro);

        layoutWidget2 = new QWidget(groupBox_FocusMode);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 120, 264, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_AF_On = new QPushButton(layoutWidget2);
        pushButton_AF_On->setObjectName(QString::fromUtf8("pushButton_AF_On"));

        horizontalLayout_2->addWidget(pushButton_AF_On);

        pushButton_AF_Off = new QPushButton(layoutWidget2);
        pushButton_AF_Off->setObjectName(QString::fromUtf8("pushButton_AF_Off"));

        horizontalLayout_2->addWidget(pushButton_AF_Off);

        layoutWidget3 = new QWidget(groupBox_FocusMode);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(110, 30, 251, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_FocusPosition = new QLineEdit(layoutWidget3);
        lineEdit_FocusPosition->setObjectName(QString::fromUtf8("lineEdit_FocusPosition"));

        horizontalLayout->addWidget(lineEdit_FocusPosition);

        layoutWidget1->raise();
        layoutWidget2->raise();
        layoutWidget3->raise();
        pushButton_FocusApply->raise();
        groupBox_OIS_Mode = new QGroupBox(centralWidget);
        groupBox_OIS_Mode->setObjectName(QString::fromUtf8("groupBox_OIS_Mode"));
        groupBox_OIS_Mode->setGeometry(QRect(10, 210, 401, 171));
        groupBox_OIS_Mode->setStyleSheet(QString::fromUtf8("QGroupBox {border:1px solid gray; border-radius:5px; margin-top:1ex;}QGroupBox::title{subcontrol-origin:margin; subcontrol-position:top left; padding:0 0px;}"));
        layoutWidget4 = new QWidget(groupBox_OIS_Mode);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 30, 324, 92));
        formLayout = new QFormLayout(layoutWidget4);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_OIS_Mode0 = new QRadioButton(layoutWidget4);
        radioButton_OIS_Mode0->setObjectName(QString::fromUtf8("radioButton_OIS_Mode0"));

        formLayout->setWidget(0, QFormLayout::LabelRole, radioButton_OIS_Mode0);

        radioButton_OIS_Mode3 = new QRadioButton(layoutWidget4);
        radioButton_OIS_Mode3->setObjectName(QString::fromUtf8("radioButton_OIS_Mode3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, radioButton_OIS_Mode3);

        radioButton_OIS_Mode1 = new QRadioButton(layoutWidget4);
        radioButton_OIS_Mode1->setObjectName(QString::fromUtf8("radioButton_OIS_Mode1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, radioButton_OIS_Mode1);

        radioButton_OIS_Mode4 = new QRadioButton(layoutWidget4);
        radioButton_OIS_Mode4->setObjectName(QString::fromUtf8("radioButton_OIS_Mode4"));

        formLayout->setWidget(1, QFormLayout::FieldRole, radioButton_OIS_Mode4);

        radioButton_OIS_Mode2 = new QRadioButton(layoutWidget4);
        radioButton_OIS_Mode2->setObjectName(QString::fromUtf8("radioButton_OIS_Mode2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioButton_OIS_Mode2);

        radioButton_OIS_Mode5 = new QRadioButton(layoutWidget4);
        radioButton_OIS_Mode5->setObjectName(QString::fromUtf8("radioButton_OIS_Mode5"));

        formLayout->setWidget(2, QFormLayout::FieldRole, radioButton_OIS_Mode5);

        pushButton_OIS_Apply = new QPushButton(groupBox_OIS_Mode);
        pushButton_OIS_Apply->setObjectName(QString::fromUtf8("pushButton_OIS_Apply"));
        pushButton_OIS_Apply->setGeometry(QRect(300, 130, 85, 31));
        checkBox_LSC = new QCheckBox(centralWidget);
        checkBox_LSC->setObjectName(QString::fromUtf8("checkBox_LSC"));
        checkBox_LSC->setGeometry(QRect(10, 0, 401, 26));
        groupBox_StillCapture = new QGroupBox(centralWidget);
        groupBox_StillCapture->setObjectName(QString::fromUtf8("groupBox_StillCapture"));
        groupBox_StillCapture->setGeometry(QRect(10, 390, 261, 61));
        groupBox_StillCapture->setStyleSheet(QString::fromUtf8("QGroupBox {border:1px solid gray; border-radius:5px; margin-top:1ex;}QGroupBox::title{subcontrol-origin:margin; subcontrol-position:top left; padding:0 0px;}"));
        layoutWidget5 = new QWidget(groupBox_StillCapture);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 20, 241, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_Still12M_NML = new QPushButton(layoutWidget5);
        pushButton_Still12M_NML->setObjectName(QString::fromUtf8("pushButton_Still12M_NML"));

        horizontalLayout_3->addWidget(pushButton_Still12M_NML);

        pushButton_Still12M_HDR = new QPushButton(layoutWidget5);
        pushButton_Still12M_HDR->setObjectName(QString::fromUtf8("pushButton_Still12M_HDR"));

        horizontalLayout_3->addWidget(pushButton_Still12M_HDR);

        groupBox_Highspeed = new QGroupBox(centralWidget);
        groupBox_Highspeed->setObjectName(QString::fromUtf8("groupBox_Highspeed"));
        groupBox_Highspeed->setGeometry(QRect(279, 390, 131, 61));
        groupBox_Highspeed->setStyleSheet(QString::fromUtf8("QGroupBox {border:1px solid gray; border-radius:5px; margin-top:1ex;}QGroupBox::title{subcontrol-origin:margin; subcontrol-position:top left; padding:0 0px;}"));
        pushButton_Highspeed = new QPushButton(groupBox_Highspeed);
        pushButton_Highspeed->setObjectName(QString::fromUtf8("pushButton_Highspeed"));
        pushButton_Highspeed->setGeometry(QRect(30, 23, 85, 27));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 0, 0, 0));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 2, 2));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox_FocusMode->setTitle(QApplication::translate("MainWindow", "Focus Mode", 0, QApplication::UnicodeUTF8));
        pushButton_FocusApply->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        radioButton_Direct->setText(QApplication::translate("MainWindow", "Direct", 0, QApplication::UnicodeUTF8));
        radioButton_Infinity->setText(QApplication::translate("MainWindow", "Infinity", 0, QApplication::UnicodeUTF8));
        radioButton_Macro->setText(QApplication::translate("MainWindow", "Macro", 0, QApplication::UnicodeUTF8));
        pushButton_AF_On->setText(QApplication::translate("MainWindow", "Auto Focus ON", 0, QApplication::UnicodeUTF8));
        pushButton_AF_Off->setText(QApplication::translate("MainWindow", "Auto Focus OFF", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Focus Position(0-1023):</p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_OIS_Mode->setTitle(QApplication::translate("MainWindow", "OIS Mode", 0, QApplication::UnicodeUTF8));
        radioButton_OIS_Mode0->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        radioButton_OIS_Mode3->setText(QApplication::translate("MainWindow", "Movie", 0, QApplication::UnicodeUTF8));
        radioButton_OIS_Mode1->setText(QApplication::translate("MainWindow", "Zero shutter", 0, QApplication::UnicodeUTF8));
        radioButton_OIS_Mode4->setText(QApplication::translate("MainWindow", "High SR Movie", 0, QApplication::UnicodeUTF8));
        radioButton_OIS_Mode2->setText(QApplication::translate("MainWindow", "Exposure/Shake eval.", 0, QApplication::UnicodeUTF8));
        radioButton_OIS_Mode5->setText(QApplication::translate("MainWindow", "View Finder", 0, QApplication::UnicodeUTF8));
        pushButton_OIS_Apply->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        checkBox_LSC->setText(QApplication::translate("MainWindow", "LSC (Lens Shading Correction)", 0, QApplication::UnicodeUTF8));
        groupBox_StillCapture->setTitle(QApplication::translate("MainWindow", "Still Capture", 0, QApplication::UnicodeUTF8));
        pushButton_Still12M_NML->setText(QApplication::translate("MainWindow", "12M Normal", 0, QApplication::UnicodeUTF8));
        pushButton_Still12M_HDR->setText(QApplication::translate("MainWindow", "12M HDR", 0, QApplication::UnicodeUTF8));
        groupBox_Highspeed->setTitle(QApplication::translate("MainWindow", "Highspeed", 0, QApplication::UnicodeUTF8));
        pushButton_Highspeed->setText(QApplication::translate("MainWindow", "Record", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
