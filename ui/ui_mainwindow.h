/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *QGBSerialConfig;
    QPushButton *btnOpenPort;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *lblVerify;
    QComboBox *cbbDataBit;
    QLabel *lblPortNum;
    QLabel *lblStopBit;
    QLabel *lblBaudRate;
    QComboBox *cbbPortNum;
    QComboBox *cbbVerify;
    QComboBox *cbbStopBit;
    QComboBox *cbbBaud;
    QLabel *lblDataBit;
    QPushButton *btnRefresh;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnReset;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QPushButton *btnStartStop;
    QPushButton *btnAlignment;
    QSpinBox *spbSpeed;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnPosKp;
    QSpinBox *spbPosKp;
    QPushButton *btnPosKi;
    QSpinBox *spbPosKi;
    QPushButton *btnPosKd;
    QSpinBox *spbPosKd;
    QPushButton *btnRamp;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spbPosTarget;
    QSpinBox *spbPosTime;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(658, 287);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        QGBSerialConfig = new QGroupBox(centralWidget);
        QGBSerialConfig->setObjectName(QStringLiteral("QGBSerialConfig"));
        QGBSerialConfig->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGBSerialConfig->sizePolicy().hasHeightForWidth());
        QGBSerialConfig->setSizePolicy(sizePolicy);
        QGBSerialConfig->setMinimumSize(QSize(171, 201));
        QGBSerialConfig->setMaximumSize(QSize(171, 201));
        QGBSerialConfig->setStyleSheet(QStringLiteral(""));
        QGBSerialConfig->setFlat(false);
        QGBSerialConfig->setCheckable(false);
        btnOpenPort = new QPushButton(QGBSerialConfig);
        btnOpenPort->setObjectName(QStringLiteral("btnOpenPort"));
        btnOpenPort->setEnabled(true);
        btnOpenPort->setGeometry(QRect(69, 160, 91, 31));
        btnOpenPort->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/action/centrejust.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/action/action/process-stop.png"), QSize(), QIcon::Normal, QIcon::On);
        btnOpenPort->setIcon(icon);
        btnOpenPort->setIconSize(QSize(18, 18));
        btnOpenPort->setCheckable(true);
        btnOpenPort->setChecked(false);
        btnOpenPort->setAutoDefault(false);
        btnOpenPort->setFlat(false);
        formLayoutWidget = new QWidget(QGBSerialConfig);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 151, 136));
        gridLayout_3 = new QGridLayout(formLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lblVerify = new QLabel(formLayoutWidget);
        lblVerify->setObjectName(QStringLiteral("lblVerify"));

        gridLayout_3->addWidget(lblVerify, 3, 0, 1, 1);

        cbbDataBit = new QComboBox(formLayoutWidget);
        cbbDataBit->setObjectName(QStringLiteral("cbbDataBit"));
        QFont font;
        font.setPointSize(10);
        cbbDataBit->setFont(font);
        cbbDataBit->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_3->addWidget(cbbDataBit, 2, 1, 1, 1);

        lblPortNum = new QLabel(formLayoutWidget);
        lblPortNum->setObjectName(QStringLiteral("lblPortNum"));

        gridLayout_3->addWidget(lblPortNum, 0, 0, 1, 1);

        lblStopBit = new QLabel(formLayoutWidget);
        lblStopBit->setObjectName(QStringLiteral("lblStopBit"));

        gridLayout_3->addWidget(lblStopBit, 4, 0, 1, 1);

        lblBaudRate = new QLabel(formLayoutWidget);
        lblBaudRate->setObjectName(QStringLiteral("lblBaudRate"));

        gridLayout_3->addWidget(lblBaudRate, 1, 0, 1, 1);

        cbbPortNum = new QComboBox(formLayoutWidget);
        cbbPortNum->setObjectName(QStringLiteral("cbbPortNum"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbbPortNum->sizePolicy().hasHeightForWidth());
        cbbPortNum->setSizePolicy(sizePolicy1);
        cbbPortNum->setFont(font);
        cbbPortNum->setMaxVisibleItems(20);
        cbbPortNum->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        cbbPortNum->setMinimumContentsLength(0);

        gridLayout_3->addWidget(cbbPortNum, 0, 1, 1, 1);

        cbbVerify = new QComboBox(formLayoutWidget);
        cbbVerify->setObjectName(QStringLiteral("cbbVerify"));
        cbbVerify->setFont(font);
        cbbVerify->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_3->addWidget(cbbVerify, 3, 1, 1, 1);

        cbbStopBit = new QComboBox(formLayoutWidget);
        cbbStopBit->setObjectName(QStringLiteral("cbbStopBit"));
        cbbStopBit->setEnabled(false);
        cbbStopBit->setFont(font);
        cbbStopBit->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_3->addWidget(cbbStopBit, 4, 1, 1, 1);

        cbbBaud = new QComboBox(formLayoutWidget);
        cbbBaud->setObjectName(QStringLiteral("cbbBaud"));
        cbbBaud->setFont(font);
        cbbBaud->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_3->addWidget(cbbBaud, 1, 1, 1, 1);

        lblDataBit = new QLabel(formLayoutWidget);
        lblDataBit->setObjectName(QStringLiteral("lblDataBit"));

        gridLayout_3->addWidget(lblDataBit, 2, 0, 1, 1);

        btnRefresh = new QPushButton(QGBSerialConfig);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));
        btnRefresh->setGeometry(QRect(11, 160, 56, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/action/action/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRefresh->setIcon(icon1);
        btnRefresh->setIconSize(QSize(20, 20));

        gridLayout_2->addWidget(QGBSerialConfig, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnReset = new QPushButton(groupBox_2);
        btnReset->setObjectName(QStringLiteral("btnReset"));

        verticalLayout->addWidget(btnReset);

        btnStart = new QPushButton(groupBox_2);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        verticalLayout->addWidget(btnStart);

        btnStop = new QPushButton(groupBox_2);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        verticalLayout->addWidget(btnStop);

        btnStartStop = new QPushButton(groupBox_2);
        btnStartStop->setObjectName(QStringLiteral("btnStartStop"));

        verticalLayout->addWidget(btnStartStop);

        btnAlignment = new QPushButton(groupBox_2);
        btnAlignment->setObjectName(QStringLiteral("btnAlignment"));

        verticalLayout->addWidget(btnAlignment);

        spbSpeed = new QSpinBox(groupBox_2);
        spbSpeed->setObjectName(QStringLiteral("spbSpeed"));
        spbSpeed->setEnabled(false);
        spbSpeed->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spbSpeed->setMinimum(-999999999);
        spbSpeed->setMaximum(999999999);

        verticalLayout->addWidget(spbSpeed);


        gridLayout_2->addWidget(groupBox_2, 0, 2, 2, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnPosKp = new QPushButton(groupBox);
        btnPosKp->setObjectName(QStringLiteral("btnPosKp"));

        gridLayout->addWidget(btnPosKp, 0, 0, 1, 1);

        spbPosKp = new QSpinBox(groupBox);
        spbPosKp->setObjectName(QStringLiteral("spbPosKp"));
        spbPosKp->setMinimum(-65536);
        spbPosKp->setMaximum(65535);

        gridLayout->addWidget(spbPosKp, 0, 1, 1, 1);

        btnPosKi = new QPushButton(groupBox);
        btnPosKi->setObjectName(QStringLiteral("btnPosKi"));

        gridLayout->addWidget(btnPosKi, 1, 0, 1, 1);

        spbPosKi = new QSpinBox(groupBox);
        spbPosKi->setObjectName(QStringLiteral("spbPosKi"));
        spbPosKi->setMinimum(-65536);
        spbPosKi->setMaximum(65536);

        gridLayout->addWidget(spbPosKi, 1, 1, 1, 1);

        btnPosKd = new QPushButton(groupBox);
        btnPosKd->setObjectName(QStringLiteral("btnPosKd"));

        gridLayout->addWidget(btnPosKd, 2, 0, 1, 1);

        spbPosKd = new QSpinBox(groupBox);
        spbPosKd->setObjectName(QStringLiteral("spbPosKd"));
        spbPosKd->setMinimum(-65536);
        spbPosKd->setMaximum(65536);

        gridLayout->addWidget(spbPosKd, 2, 1, 1, 1);

        btnRamp = new QPushButton(groupBox);
        btnRamp->setObjectName(QStringLiteral("btnRamp"));

        gridLayout->addWidget(btnRamp, 3, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        spbPosTarget = new QSpinBox(groupBox);
        spbPosTarget->setObjectName(QStringLiteral("spbPosTarget"));
        spbPosTarget->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spbPosTarget->setMinimum(-99999999);
        spbPosTarget->setMaximum(999999999);

        verticalLayout_2->addWidget(spbPosTarget);

        spbPosTime = new QSpinBox(groupBox);
        spbPosTime->setObjectName(QStringLiteral("spbPosTime"));
        spbPosTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spbPosTime->setMaximum(999999999);

        verticalLayout_2->addWidget(spbPosTime);


        gridLayout->addLayout(verticalLayout_2, 3, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 3, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        btnOpenPort->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        QGBSerialConfig->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        btnOpenPort->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        lblVerify->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214", Q_NULLPTR));
        lblPortNum->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        lblStopBit->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        lblBaudRate->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        lblDataBit->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRefresh->setToolTip(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRefresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\351\200\232\347\224\250\350\256\276\347\275\256", Q_NULLPTR));
        btnReset->setText(QApplication::translate("MainWindow", "\345\244\215\344\275\215(Ctrl+ R)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnReset->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnStart->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250(Ctrl+ S)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnStart->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242(Esc)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnStop->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnStartStop->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250/\345\201\234\346\255\242(Enter)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnStartStop->setShortcut(QApplication::translate("MainWindow", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnAlignment->setText(QApplication::translate("MainWindow", "\346\240\241\345\207\206\345\257\271\351\275\220(Ctrl+ A)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnAlignment->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        spbSpeed->setSuffix(QApplication::translate("MainWindow", " RPM", Q_NULLPTR));
        spbSpeed->setPrefix(QApplication::translate("MainWindow", "\347\224\265\346\234\272\350\275\254\351\200\237\357\274\232 ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\275\215\347\275\256\346\216\247\345\210\266", Q_NULLPTR));
        btnPosKp->setText(QApplication::translate("MainWindow", "Kd", Q_NULLPTR));
        btnPosKi->setText(QApplication::translate("MainWindow", "Ki", Q_NULLPTR));
        btnPosKd->setText(QApplication::translate("MainWindow", "Kd", Q_NULLPTR));
        btnRamp->setText(QApplication::translate("MainWindow", "Ramp", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H