/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindowClass
{
public:
    QWidget *xpsMainPanel;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *connectionLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *xpsip;
    QLineEdit *xpsport;
    QLineEdit *xpslogin;
    QLineEdit *xpspass;
    QSpacerItem *horizontalSpacer;
    QPushButton *connecttoxps;
    QLineEdit *xpsstatus;
    QGroupBox *stageGroupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *stageLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addStagePanel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainWindowClass)
    {
        if (mainWindowClass->objectName().isEmpty())
            mainWindowClass->setObjectName(QStringLiteral("mainWindowClass"));
        mainWindowClass->resize(1049, 432);
        mainWindowClass->setWindowOpacity(1);
        xpsMainPanel = new QWidget(mainWindowClass);
        xpsMainPanel->setObjectName(QStringLiteral("xpsMainPanel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xpsMainPanel->sizePolicy().hasHeightForWidth());
        xpsMainPanel->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(xpsMainPanel);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, -1, -1, -1);
        groupBox = new QGroupBox(xpsMainPanel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        QFont font;
        font.setPointSize(11);
        font.setUnderline(false);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        connectionLayout = new QVBoxLayout();
        connectionLayout->setSpacing(6);
        connectionLayout->setObjectName(QStringLiteral("connectionLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        xpsip = new QLineEdit(groupBox);
        xpsip->setObjectName(QStringLiteral("xpsip"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xpsip->sizePolicy().hasHeightForWidth());
        xpsip->setSizePolicy(sizePolicy1);
        xpsip->setToolTipDuration(2000);

        horizontalLayout->addWidget(xpsip);

        xpsport = new QLineEdit(groupBox);
        xpsport->setObjectName(QStringLiteral("xpsport"));
        sizePolicy1.setHeightForWidth(xpsport->sizePolicy().hasHeightForWidth());
        xpsport->setSizePolicy(sizePolicy1);
        xpsport->setToolTipDuration(2000);

        horizontalLayout->addWidget(xpsport);

        xpslogin = new QLineEdit(groupBox);
        xpslogin->setObjectName(QStringLiteral("xpslogin"));
        sizePolicy1.setHeightForWidth(xpslogin->sizePolicy().hasHeightForWidth());
        xpslogin->setSizePolicy(sizePolicy1);
        xpslogin->setToolTipDuration(2000);

        horizontalLayout->addWidget(xpslogin);

        xpspass = new QLineEdit(groupBox);
        xpspass->setObjectName(QStringLiteral("xpspass"));
        sizePolicy1.setHeightForWidth(xpspass->sizePolicy().hasHeightForWidth());
        xpspass->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        xpspass->setFont(font1);
        xpspass->setFocusPolicy(Qt::StrongFocus);
        xpspass->setToolTipDuration(2000);

        horizontalLayout->addWidget(xpspass);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connecttoxps = new QPushButton(groupBox);
        connecttoxps->setObjectName(QStringLiteral("connecttoxps"));

        horizontalLayout->addWidget(connecttoxps);


        connectionLayout->addLayout(horizontalLayout);

        xpsstatus = new QLineEdit(groupBox);
        xpsstatus->setObjectName(QStringLiteral("xpsstatus"));
        xpsstatus->setReadOnly(true);

        connectionLayout->addWidget(xpsstatus);


        horizontalLayout_3->addLayout(connectionLayout);


        verticalLayout->addWidget(groupBox);

        stageGroupBox = new QGroupBox(xpsMainPanel);
        stageGroupBox->setObjectName(QStringLiteral("stageGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stageGroupBox->sizePolicy().hasHeightForWidth());
        stageGroupBox->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        stageGroupBox->setFont(font2);
        stageGroupBox->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(stageGroupBox);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 1, 0, 0);
        stageLayout = new QVBoxLayout();
        stageLayout->setSpacing(5);
        stageLayout->setObjectName(QStringLiteral("stageLayout"));

        verticalLayout_2->addLayout(stageLayout);


        verticalLayout->addWidget(stageGroupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addStagePanel = new QPushButton(xpsMainPanel);
        addStagePanel->setObjectName(QStringLiteral("addStagePanel"));
        QFont font3;
        font3.setPointSize(11);
        addStagePanel->setFont(font3);

        horizontalLayout_2->addWidget(addStagePanel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mainWindowClass->setCentralWidget(xpsMainPanel);
        menuBar = new QMenuBar(mainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1049, 21));
        mainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainWindowClass->setStatusBar(statusBar);

        retranslateUi(mainWindowClass);

        QMetaObject::connectSlotsByName(mainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindowClass)
    {
        mainWindowClass->setWindowTitle(QApplication::translate("mainWindowClass", "Newport XPS-Q8 Stage Control", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("mainWindowClass", "XPS Connection Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        xpsip->setToolTip(QApplication::translate("mainWindowClass", "IPv4 synthax", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        xpsip->setText(QApplication::translate("mainWindowClass", "129.105.83.20", Q_NULLPTR));
        xpsip->setPlaceholderText(QApplication::translate("mainWindowClass", "IP Address", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        xpsport->setToolTip(QApplication::translate("mainWindowClass", "Usually \"5001\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        xpsport->setText(QApplication::translate("mainWindowClass", "5001", Q_NULLPTR));
        xpsport->setPlaceholderText(QApplication::translate("mainWindowClass", "Port #", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        xpslogin->setToolTip(QApplication::translate("mainWindowClass", "Default \"Administrator\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        xpslogin->setPlaceholderText(QApplication::translate("mainWindowClass", "Login", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        xpspass->setToolTip(QApplication::translate("mainWindowClass", "Default \"Administrator\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        xpspass->setPlaceholderText(QApplication::translate("mainWindowClass", "Password", Q_NULLPTR));
        connecttoxps->setText(QApplication::translate("mainWindowClass", "Connect", Q_NULLPTR));
        xpsstatus->setPlaceholderText(QApplication::translate("mainWindowClass", "Status", Q_NULLPTR));
        stageGroupBox->setTitle(QApplication::translate("mainWindowClass", "Stage Panels", Q_NULLPTR));
        addStagePanel->setText(QApplication::translate("mainWindowClass", "Add Stage", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWindowClass: public Ui_mainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
