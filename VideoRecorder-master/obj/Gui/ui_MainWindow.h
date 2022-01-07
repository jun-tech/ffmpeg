/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_back;
    QWidget *widget_top;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_top_tool_back;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_tool;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_view;
    QToolButton *toolButton_record_start;
    QToolButton *toolButton_record_restore;
    QToolButton *toolButton_record_pause;
    QToolButton *toolButton_record_stop;
    QToolButton *toolButton_camera;
    QWidget *widget_micro_back;
    QLabel *label_Micro_green;
    QLabel *label_Micro_black;
    QToolButton *toolButton_micro;
    QToolButton *toolButton_exit;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_time;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_time;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_expand_top;
    QPushButton *pushButton_expand_top;
    QLabel *label_time_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QLabel *label_erro_tips_10000;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(927, 238);
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_back = new QWidget(MainWindow);
        widget_back->setObjectName(QString::fromUtf8("widget_back"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_back->sizePolicy().hasHeightForWidth());
        widget_back->setSizePolicy(sizePolicy);
        widget_top = new QWidget(widget_back);
        widget_top->setObjectName(QString::fromUtf8("widget_top"));
        widget_top->setGeometry(QRect(0, 10, 671, 121));
        verticalLayout_3 = new QVBoxLayout(widget_top);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_top_tool_back = new QWidget(widget_top);
        widget_top_tool_back->setObjectName(QString::fromUtf8("widget_top_tool_back"));
        verticalLayout_4 = new QVBoxLayout(widget_top_tool_back);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_top_tool_back);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 64));
        widget_3->setMaximumSize(QSize(16777215, 64));
        widget_3->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        widget_tool = new QWidget(widget_3);
        widget_tool->setObjectName(QString::fromUtf8("widget_tool"));
        widget_tool->setMinimumSize(QSize(0, 64));
        widget_tool->setMaximumSize(QSize(16777215, 64));
        widget_tool->setStyleSheet(QString::fromUtf8("\n"
"QWidget#widget_tool\n"
"{\n"
"border-radius:8px;\n"
"background-color: rgba(64, 74, 87, 100%);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: #ffffff;\n"
"	font-size:24px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"\n"
"\n"
"QToolButton{\n"
"	background: transparent;\n"
"padding-top:4px;\n"
"padding-bottom:2px;\n"
"	border:none;\n"
"	color: #ffffff;\n"
"	font-size:14px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	image-position: 10px;\n"
"border-radius:6px;\n"
"\n"
"} \n"
"QToolButton:hover{ \n"
"	margin:1px;\n"
"	padding-bottom:0px;\n"
"	background-color: rgba(255, 255, 255, 10%);\n"
"}\n"
"QToolButton:checked{\n"
"	color:rgb(255, 255, 255);\n"
"};"));
        horizontalLayout = new QHBoxLayout(widget_tool);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(24, 3, 24, 2);
        toolButton_view = new QToolButton(widget_tool);
        toolButton_view->setObjectName(QString::fromUtf8("toolButton_view"));
        toolButton_view->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_view->sizePolicy().hasHeightForWidth());
        toolButton_view->setSizePolicy(sizePolicy1);
        toolButton_view->setMinimumSize(QSize(50, 0));
        toolButton_view->setMaximumSize(QSize(50, 16777215));
        toolButton_view->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_view->setStyleSheet(QString::fromUtf8("\n"
"QToolButton{\n"
"	image: url(:/image/set.png);\n"
"} \n"
"\n"
"QToolButton:checked{\n"
"	image: url(:/image/main/ic-menu-02a.png);\n"
"};"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/ic-menu-default.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view->setIcon(icon);
        toolButton_view->setIconSize(QSize(32, 32));
        toolButton_view->setCheckable(false);
        toolButton_view->setChecked(false);
        toolButton_view->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_view);

        toolButton_record_start = new QToolButton(widget_tool);
        toolButton_record_start->setObjectName(QString::fromUtf8("toolButton_record_start"));
        toolButton_record_start->setEnabled(true);
        sizePolicy1.setHeightForWidth(toolButton_record_start->sizePolicy().hasHeightForWidth());
        toolButton_record_start->setSizePolicy(sizePolicy1);
        toolButton_record_start->setMinimumSize(QSize(50, 0));
        toolButton_record_start->setMaximumSize(QSize(50, 16777215));
        toolButton_record_start->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_start->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_start.png);\n"
"} \n"
""));
        toolButton_record_start->setIcon(icon);
        toolButton_record_start->setIconSize(QSize(32, 32));
        toolButton_record_start->setCheckable(false);
        toolButton_record_start->setChecked(false);
        toolButton_record_start->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_start);

        toolButton_record_restore = new QToolButton(widget_tool);
        toolButton_record_restore->setObjectName(QString::fromUtf8("toolButton_record_restore"));
        toolButton_record_restore->setEnabled(true);
        sizePolicy1.setHeightForWidth(toolButton_record_restore->sizePolicy().hasHeightForWidth());
        toolButton_record_restore->setSizePolicy(sizePolicy1);
        toolButton_record_restore->setMinimumSize(QSize(50, 0));
        toolButton_record_restore->setMaximumSize(QSize(50, 16777215));
        toolButton_record_restore->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_restore->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_restore.png);\n"
"} \n"
""));
        toolButton_record_restore->setIcon(icon);
        toolButton_record_restore->setIconSize(QSize(32, 32));
        toolButton_record_restore->setCheckable(false);
        toolButton_record_restore->setChecked(false);
        toolButton_record_restore->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_restore);

        toolButton_record_pause = new QToolButton(widget_tool);
        toolButton_record_pause->setObjectName(QString::fromUtf8("toolButton_record_pause"));
        toolButton_record_pause->setEnabled(true);
        sizePolicy1.setHeightForWidth(toolButton_record_pause->sizePolicy().hasHeightForWidth());
        toolButton_record_pause->setSizePolicy(sizePolicy1);
        toolButton_record_pause->setMinimumSize(QSize(50, 0));
        toolButton_record_pause->setMaximumSize(QSize(50, 16777215));
        toolButton_record_pause->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_pause->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_pause.png);\n"
"} \n"
""));
        toolButton_record_pause->setIcon(icon);
        toolButton_record_pause->setIconSize(QSize(32, 32));
        toolButton_record_pause->setCheckable(false);
        toolButton_record_pause->setChecked(false);
        toolButton_record_pause->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_pause);

        toolButton_record_stop = new QToolButton(widget_tool);
        toolButton_record_stop->setObjectName(QString::fromUtf8("toolButton_record_stop"));
        toolButton_record_stop->setEnabled(true);
        sizePolicy1.setHeightForWidth(toolButton_record_stop->sizePolicy().hasHeightForWidth());
        toolButton_record_stop->setSizePolicy(sizePolicy1);
        toolButton_record_stop->setMinimumSize(QSize(50, 0));
        toolButton_record_stop->setMaximumSize(QSize(50, 16777215));
        toolButton_record_stop->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_stop->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_stop.png);\n"
"} \n"
""));
        toolButton_record_stop->setIcon(icon);
        toolButton_record_stop->setIconSize(QSize(32, 32));
        toolButton_record_stop->setCheckable(false);
        toolButton_record_stop->setChecked(false);
        toolButton_record_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_stop);

        toolButton_camera = new QToolButton(widget_tool);
        toolButton_camera->setObjectName(QString::fromUtf8("toolButton_camera"));
        toolButton_camera->setEnabled(true);
        sizePolicy1.setHeightForWidth(toolButton_camera->sizePolicy().hasHeightForWidth());
        toolButton_camera->setSizePolicy(sizePolicy1);
        toolButton_camera->setMinimumSize(QSize(50, 0));
        toolButton_camera->setMaximumSize(QSize(50, 16777215));
        toolButton_camera->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_camera->setStyleSheet(QString::fromUtf8("\n"
"QToolButton{\n"
"	image: url(:/image/camera_g.png);\n"
"color:#FFFFFF;\n"
"} \n"
"\n"
"QToolButton:checked{\n"
"	image: url(:/image/camera.png);\n"
"color:#FFFFFF;\n"
"};"));
        toolButton_camera->setIcon(icon);
        toolButton_camera->setIconSize(QSize(32, 32));
        toolButton_camera->setCheckable(true);
        toolButton_camera->setChecked(false);
        toolButton_camera->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_camera);

        widget_micro_back = new QWidget(widget_tool);
        widget_micro_back->setObjectName(QString::fromUtf8("widget_micro_back"));
        widget_micro_back->setMinimumSize(QSize(50, 0));
        widget_micro_back->setMaximumSize(QSize(50, 16777215));
        widget_micro_back->setStyleSheet(QString::fromUtf8("border-radius:6px;"));
        label_Micro_green = new QLabel(widget_micro_back);
        label_Micro_green->setObjectName(QString::fromUtf8("label_Micro_green"));
        label_Micro_green->setGeometry(QRect(13, 4, 23, 32));
        label_Micro_green->setMouseTracking(true);
        label_Micro_green->setStyleSheet(QString::fromUtf8("background: url(:/image/micro_2.png) no-repeat fixed 23px 32px;"));
        label_Micro_black = new QLabel(widget_micro_back);
        label_Micro_black->setObjectName(QString::fromUtf8("label_Micro_black"));
        label_Micro_black->setGeometry(QRect(13, 4, 23, 32));
        label_Micro_black->setMouseTracking(true);
        label_Micro_black->setStyleSheet(QString::fromUtf8("background: url(:/image/micro.png) no-repeat fixed 23px 32px;"));
        toolButton_micro = new QToolButton(widget_micro_back);
        toolButton_micro->setObjectName(QString::fromUtf8("toolButton_micro"));
        toolButton_micro->setEnabled(true);
        toolButton_micro->setGeometry(QRect(0, 0, 50, 59));
        sizePolicy1.setHeightForWidth(toolButton_micro->sizePolicy().hasHeightForWidth());
        toolButton_micro->setSizePolicy(sizePolicy1);
        toolButton_micro->setMinimumSize(QSize(50, 0));
        toolButton_micro->setMaximumSize(QSize(50, 16777215));
        toolButton_micro->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_micro->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QToolButton{\n"
"	/*image: url(:/image/micro.png);*/\n"
"color:#FFFFFF;\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"	image: url(:/image/micro_mute.png);\n"
"	color:#FFFFFF;\n"
"}\n"
""));
        toolButton_micro->setIcon(icon);
        toolButton_micro->setIconSize(QSize(32, 32));
        toolButton_micro->setCheckable(true);
        toolButton_micro->setChecked(false);
        toolButton_micro->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(widget_micro_back);

        toolButton_exit = new QToolButton(widget_tool);
        toolButton_exit->setObjectName(QString::fromUtf8("toolButton_exit"));
        toolButton_exit->setEnabled(true);
        sizePolicy1.setHeightForWidth(toolButton_exit->sizePolicy().hasHeightForWidth());
        toolButton_exit->setSizePolicy(sizePolicy1);
        toolButton_exit->setMinimumSize(QSize(50, 0));
        toolButton_exit->setMaximumSize(QSize(50, 16777215));
        toolButton_exit->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_exit->setStyleSheet(QString::fromUtf8("\n"
"QToolButton{\n"
"	image: url(:/image/radiobtn_normal.png);\n"
"} \n"
"\n"
"QToolButton:checked{\n"
"	image: url(:/image/radiobtn_normal.png);\n"
"};"));
        toolButton_exit->setIcon(icon);
        toolButton_exit->setIconSize(QSize(32, 32));
        toolButton_exit->setCheckable(true);
        toolButton_exit->setChecked(false);
        toolButton_exit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_exit);


        horizontalLayout_3->addWidget(widget_tool);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_4->addWidget(widget_3);

        widget_time = new QWidget(widget_top_tool_back);
        widget_time->setObjectName(QString::fromUtf8("widget_time"));
        widget_time->setMinimumSize(QSize(0, 24));
        widget_time->setMaximumSize(QSize(16777215, 24));
        widget_time->setStyleSheet(QString::fromUtf8("\n"
"QLabel\n"
"{\n"
"background-color: rgba(235, 92, 96, 80%);\n"
"\n"
"	font-family: \"Microsoft YaHei UI\";\n"
"	font-size: 14px;\n"
"	color:#FEFEFE;\n"
"}\n"
"\n"
"QLabel#label_course_name\n"
"{	\n"
"border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QLabel#label_time\n"
"{	\n"
"border-bottom-right-radius:4px;\n"
"}\n"
"\n"
""));
        horizontalLayout_4 = new QHBoxLayout(widget_time);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(497, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_time = new QLabel(widget_time);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setMinimumSize(QSize(100, 24));
        label_time->setMaximumSize(QSize(100, 24));
        label_time->setStyleSheet(QString::fromUtf8(""));
        label_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_time);

        horizontalSpacer_7 = new QSpacerItem(498, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_4->addWidget(widget_time);


        verticalLayout_3->addWidget(widget_top_tool_back);

        widget = new QWidget(widget_top);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 24));
        widget->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(710, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        widget_expand_top = new QWidget(widget);
        widget_expand_top->setObjectName(QString::fromUtf8("widget_expand_top"));
        widget_expand_top->setMinimumSize(QSize(88, 20));
        widget_expand_top->setMaximumSize(QSize(16777215, 20));
        widget_expand_top->setStyleSheet(QString::fromUtf8("QWidget#widget_expand_top\n"
"{\n"
"	border-bottom-right-radius:10px;\n"
"border-bottom-left-radius:10px;\n"
"background-color: rgba(64, 74, 87, 100%);\n"
"border:none;\n"
"background-position:center;\n"
"background-repeat:no-repeat;\n"
"   \n"
"}"));
        pushButton_expand_top = new QPushButton(widget_expand_top);
        pushButton_expand_top->setObjectName(QString::fromUtf8("pushButton_expand_top"));
        pushButton_expand_top->setGeometry(QRect(0, 0, 88, 20));
        pushButton_expand_top->setStyleSheet(QString::fromUtf8("border:none;"));
        label_time_2 = new QLabel(widget_expand_top);
        label_time_2->setObjectName(QString::fromUtf8("label_time_2"));
        label_time_2->setGeometry(QRect(0, 0, 88, 20));
        label_time_2->setStyleSheet(QString::fromUtf8("\n"
"QLabel\n"
"{\n"
"	font-family: \"Microsoft YaHei UI\";\n"
"	font-size: 14px;\n"
"	color:#FEFEFE;\n"
"}"));
        label_time_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_time_2->raise();
        pushButton_expand_top->raise();

        horizontalLayout_2->addWidget(widget_expand_top);

        horizontalSpacer_6 = new QSpacerItem(710, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_3->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_erro_tips_10000 = new QLabel(widget_back);
        label_erro_tips_10000->setObjectName(QString::fromUtf8("label_erro_tips_10000"));
        label_erro_tips_10000->setGeometry(QRect(20, 180, 901, 31));
        label_erro_tips_10000->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font-size:32px;"));

        verticalLayout->addWidget(widget_back);


        retranslateUi(MainWindow);
        QObject::connect(toolButton_micro, SIGNAL(toggled(bool)), label_Micro_black, SLOT(setHidden(bool)));
        QObject::connect(toolButton_micro, SIGNAL(toggled(bool)), label_Micro_green, SLOT(setHidden(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\345\275\225\345\210\266\350\275\257\344\273\266", nullptr));
        toolButton_view->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        toolButton_record_start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        toolButton_record_restore->setText(QCoreApplication::translate("MainWindow", "\347\273\247\347\273\255", nullptr));
        toolButton_record_pause->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        toolButton_record_stop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        toolButton_camera->setText(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", nullptr));
        label_Micro_green->setText(QString());
        label_Micro_black->setText(QString());
        toolButton_micro->setText(QCoreApplication::translate("MainWindow", "\351\272\246\345\205\213\351\243\216", nullptr));
        toolButton_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButton_expand_top->setText(QString());
        label_time_2->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_erro_tips_10000->setText(QCoreApplication::translate("MainWindow", "\346\263\250\357\274\232\345\246\202\346\236\234\346\214\211\351\222\256\347\274\226\350\257\221\344\271\213\345\220\216\346\226\207\345\255\227\345\261\205\344\270\255\346\230\276\347\244\272\344\272\206\357\274\214\346\230\257\345\233\240\344\270\272icon\346\262\241\346\234\211\350\256\276\347\275\256\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
