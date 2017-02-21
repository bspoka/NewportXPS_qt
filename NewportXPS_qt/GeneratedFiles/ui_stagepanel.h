/********************************************************************************
** Form generated from reading UI file 'stagepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGEPANEL_H
#define UI_STAGEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stagePanel
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *PanelBorder;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *stageNameLabel;
    QSpacerItem *horizontalSpacer;
    QComboBox *xpsStageNames;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *xpsCurrentPosition;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *xpsStageSpeed;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *xpsNewPosition;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *xpsMoveAbs;
    QPushButton *xpsHome;
    QPushButton *xpsEnableDisable;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *xpsJogStep;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *xpsJogUp;
    QPushButton *xpsJogDown;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *xpsStageStatus;

    void setupUi(QWidget *stagePanel)
    {
        if (stagePanel->objectName().isEmpty())
            stagePanel->setObjectName(QStringLiteral("stagePanel"));
        stagePanel->resize(1022, 84);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stagePanel->sizePolicy().hasHeightForWidth());
        stagePanel->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(stagePanel);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PanelBorder = new QFrame(stagePanel);
        PanelBorder->setObjectName(QStringLiteral("PanelBorder"));
        PanelBorder->setEnabled(true);
        PanelBorder->setMinimumSize(QSize(0, 84));
        PanelBorder->setFrameShape(QFrame::StyledPanel);
        PanelBorder->setFrameShadow(QFrame::Plain);
        verticalLayout_9 = new QVBoxLayout(PanelBorder);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_9->setContentsMargins(1, 0, 1, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(8);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        stageNameLabel = new QLabel(PanelBorder);
        stageNameLabel->setObjectName(QStringLiteral("stageNameLabel"));
        sizePolicy.setHeightForWidth(stageNameLabel->sizePolicy().hasHeightForWidth());
        stageNameLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        stageNameLabel->setFont(font);

        horizontalLayout_2->addWidget(stageNameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        xpsStageNames = new QComboBox(PanelBorder);
        xpsStageNames->setObjectName(QStringLiteral("xpsStageNames"));
        xpsStageNames->setFont(font);

        verticalLayout->addWidget(xpsStageNames);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(PanelBorder);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        xpsCurrentPosition = new QLineEdit(PanelBorder);
        xpsCurrentPosition->setObjectName(QStringLiteral("xpsCurrentPosition"));
        xpsCurrentPosition->setFont(font);
        xpsCurrentPosition->setReadOnly(true);

        verticalLayout_2->addWidget(xpsCurrentPosition);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(PanelBorder);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        xpsStageSpeed = new QLineEdit(PanelBorder);
        xpsStageSpeed->setObjectName(QStringLiteral("xpsStageSpeed"));
        xpsStageSpeed->setFont(font);

        verticalLayout_3->addWidget(xpsStageSpeed);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(PanelBorder);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_6);

        xpsNewPosition = new QLineEdit(PanelBorder);
        xpsNewPosition->setObjectName(QStringLiteral("xpsNewPosition"));
        xpsNewPosition->setFont(font);

        verticalLayout_4->addWidget(xpsNewPosition);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        xpsMoveAbs = new QPushButton(PanelBorder);
        xpsMoveAbs->setObjectName(QStringLiteral("xpsMoveAbs"));
        xpsMoveAbs->setFont(font);

        horizontalLayout_8->addWidget(xpsMoveAbs);

        xpsHome = new QPushButton(PanelBorder);
        xpsHome->setObjectName(QStringLiteral("xpsHome"));
        xpsHome->setFont(font);

        horizontalLayout_8->addWidget(xpsHome);

        xpsEnableDisable = new QPushButton(PanelBorder);
        xpsEnableDisable->setObjectName(QStringLiteral("xpsEnableDisable"));
        xpsEnableDisable->setFont(font);

        horizontalLayout_8->addWidget(xpsEnableDisable);


        verticalLayout_6->addLayout(horizontalLayout_8);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(PanelBorder);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_7);

        xpsJogStep = new QLineEdit(PanelBorder);
        xpsJogStep->setObjectName(QStringLiteral("xpsJogStep"));
        sizePolicy.setHeightForWidth(xpsJogStep->sizePolicy().hasHeightForWidth());
        xpsJogStep->setSizePolicy(sizePolicy);
        xpsJogStep->setFont(font);

        verticalLayout_5->addWidget(xpsJogStep);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        xpsJogUp = new QPushButton(PanelBorder);
        xpsJogUp->setObjectName(QStringLiteral("xpsJogUp"));
        xpsJogUp->setFont(font);

        horizontalLayout_9->addWidget(xpsJogUp);

        xpsJogDown = new QPushButton(PanelBorder);
        xpsJogDown->setObjectName(QStringLiteral("xpsJogDown"));
        xpsJogDown->setFont(font);

        horizontalLayout_9->addWidget(xpsJogDown);


        verticalLayout_7->addLayout(horizontalLayout_9);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        xpsStageStatus = new QLineEdit(PanelBorder);
        xpsStageStatus->setObjectName(QStringLiteral("xpsStageStatus"));
        xpsStageStatus->setFont(font);
        xpsStageStatus->setReadOnly(true);

        horizontalLayout_11->addWidget(xpsStageStatus);


        verticalLayout_9->addLayout(horizontalLayout_11);


        horizontalLayout->addWidget(PanelBorder);


        retranslateUi(stagePanel);

        QMetaObject::connectSlotsByName(stagePanel);
    } // setupUi

    void retranslateUi(QWidget *stagePanel)
    {
        stagePanel->setWindowTitle(QApplication::translate("stagePanel", "stagePanel", Q_NULLPTR));
        stageNameLabel->setText(QApplication::translate("stagePanel", "Stage Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("stagePanel", "Current Position", Q_NULLPTR));
        label_3->setText(QApplication::translate("stagePanel", "Stage Speed", Q_NULLPTR));
        label_4->setText(QApplication::translate("stagePanel", "New Position", Q_NULLPTR));
        xpsMoveAbs->setText(QApplication::translate("stagePanel", "Move", Q_NULLPTR));
        xpsHome->setText(QApplication::translate("stagePanel", "Home", Q_NULLPTR));
        xpsEnableDisable->setText(QApplication::translate("stagePanel", "Enable", Q_NULLPTR));
        label_5->setText(QApplication::translate("stagePanel", "Jog Step", Q_NULLPTR));
        xpsJogUp->setText(QApplication::translate("stagePanel", "+", Q_NULLPTR));
        xpsJogDown->setText(QApplication::translate("stagePanel", "-", Q_NULLPTR));
        xpsStageStatus->setPlaceholderText(QApplication::translate("stagePanel", "Stage Status", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stagePanel: public Ui_stagePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGEPANEL_H
