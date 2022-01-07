/********************************************************************************
** Form generated from reading UI file 'DragAbleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAGABLEWIDGET_H
#define UI_DRAGABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DragAbleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_frame;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_container;

    void setupUi(QWidget *DragAbleWidget)
    {
        if (DragAbleWidget->objectName().isEmpty())
            DragAbleWidget->setObjectName(QString::fromUtf8("DragAbleWidget"));
        DragAbleWidget->resize(1024, 680);
        verticalLayout = new QVBoxLayout(DragAbleWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_frame = new QWidget(DragAbleWidget);
        widget_frame->setObjectName(QString::fromUtf8("widget_frame"));
        widget_frame->setStyleSheet(QString::fromUtf8("QWidget#widget_frame\n"
"{\n"
"	border:3px solid  rgb(46, 165, 255);\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border-radius:0px;\n"
"}\n"
"\n"
"QWidget#widget_back\n"
"{\n"
"border-radius:0px;\n"
"}\n"
"\n"
"QWidget#widget_title\n"
"{\n"
"	border-top-right-radius:1px;\n"
"	border-top-left-radius:1px;\n"
"}\n"
"\n"
"QWidget#widget_container\n"
"{\n"
"	border-bottom-right-radius:1px;\n"
"	border-bottom-left-radius:1px;\n"
"}\n"
"\n"
"QStackedWidget\n"
"{\n"
"	border-bottom-right-radius:1px;\n"
"	border-bottom-left-radius:1px;\n"
"}\n"
"\n"
"QWidget#page_courseList\n"
"{\n"
"	border-bottom-right-radius:1px;\n"
"	border-bottom-left-radius:1px;\n"
"}\n"
"\n"
"	"));
        verticalLayout_2 = new QVBoxLayout(widget_frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_container = new QWidget(widget_frame);
        widget_container->setObjectName(QString::fromUtf8("widget_container"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_container->sizePolicy().hasHeightForWidth());
        widget_container->setSizePolicy(sizePolicy);
        widget_container->setStyleSheet(QString::fromUtf8("QWidget#widget_container\n"
"{\n"
"	background-color: rgb(22, 22, 22);\n"
"}\n"
""));

        verticalLayout_2->addWidget(widget_container);


        verticalLayout->addWidget(widget_frame);


        retranslateUi(DragAbleWidget);

        QMetaObject::connectSlotsByName(DragAbleWidget);
    } // setupUi

    void retranslateUi(QWidget *DragAbleWidget)
    {
        DragAbleWidget->setWindowTitle(QCoreApplication::translate("DragAbleWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DragAbleWidget: public Ui_DragAbleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAGABLEWIDGET_H
