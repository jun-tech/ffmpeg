/********************************************************************************
** Form generated from reading UI file 'ShowCameraWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCAMERAWIDGET_H
#define UI_SHOWCAMERAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widget/video/ShowVideoWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ShowCameraWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_back;
    ShowVideoWidget *widget_video;
    QWidget *widget_control;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_videoDevice;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_close;
    QWidget *widget_3;

    void setupUi(QWidget *ShowCameraWidget)
    {
        if (ShowCameraWidget->objectName().isEmpty())
            ShowCameraWidget->setObjectName(QString::fromUtf8("ShowCameraWidget"));
        ShowCameraWidget->resize(495, 343);
        verticalLayout = new QVBoxLayout(ShowCameraWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_back = new QWidget(ShowCameraWidget);
        widget_back->setObjectName(QString::fromUtf8("widget_back"));
        widget_video = new ShowVideoWidget(widget_back);
        widget_video->setObjectName(QString::fromUtf8("widget_video"));
        widget_video->setGeometry(QRect(40, 60, 181, 141));
        widget_control = new QWidget(widget_back);
        widget_control->setObjectName(QString::fromUtf8("widget_control"));
        widget_control->setGeometry(QRect(20, 10, 361, 241));
        verticalLayout_2 = new QVBoxLayout(widget_control);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, 0, -1);
        widget_2 = new QWidget(widget_control);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_videoDevice = new QComboBox(widget_2);
        comboBox_videoDevice->setObjectName(QString::fromUtf8("comboBox_videoDevice"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_videoDevice->sizePolicy().hasHeightForWidth());
        comboBox_videoDevice->setSizePolicy(sizePolicy);
        comboBox_videoDevice->setMinimumSize(QSize(0, 32));
        comboBox_videoDevice->setStyleSheet(QString::fromUtf8("\n"
"/*\344\270\213\346\213\211\346\241\206*/\n"
"QComboBox {\n"
"    font-family:\"Microsoft YaHei UI\";\n"
"    font-size:20px;\n"
"\n"
"    color:#ffffff;\n"
"    background-color:#2e3038;\n"
"\n"
"    border-radius:4px;\n"
"    border:none;\n"
"	padding-left:10px;\n"
"\n"
"\n"
"	padding-right:30px;\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView \n"
"{\n"
"     outline:0px;\n"
"     border:none;\n"
"	color:#ffffff;\n"
"	background-color:#2e3038;\n"
"border-radius:4px;\n"
"font-size:20px;\n"
"\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"     background:transparent;\n"
"}\n"
"/*\345\233\276\346\240\207*/\n"
"QComboBox::down-arrow {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position:right;\n"
"\n"
"    padding-right:10px;\n"
"\n"
"    width:23px;\n"
"    height:25px;\n"
"	image: url(:/image/Dropdown_btn.png);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item\n"
"{\n"
"height: 48px;\n"
"    backgro"
                        "und-color:#2e3038;\n"
"    border:none;\n"
"    color:#ffffff;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:hover\n"
"{\n"
"    background-color:#4b5cc4;\n"
"    color:#ffffff;\n"
"}\n"
""));

        horizontalLayout->addWidget(comboBox_videoDevice);

        horizontalSpacer = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_close = new QPushButton(widget_2);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(26, 26));
        pushButton_close->setMaximumSize(QSize(26, 26));
        pushButton_close->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:/image/close_2_normal.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:hover{ \n"
"image: url(:image/close_normal.png);\n"
"background-color:rgb(255,80,6); \n"
"border-radius:12px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/close_hover.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_close);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget_control);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(widget_3);


        verticalLayout->addWidget(widget_back);


        retranslateUi(ShowCameraWidget);

        QMetaObject::connectSlotsByName(ShowCameraWidget);
    } // setupUi

    void retranslateUi(QWidget *ShowCameraWidget)
    {
        ShowCameraWidget->setWindowTitle(QCoreApplication::translate("ShowCameraWidget", "\346\221\204\345\203\217\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_close->setToolTip(QCoreApplication::translate("ShowCameraWidget", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowCameraWidget: public Ui_ShowCameraWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCAMERAWIDGET_H
