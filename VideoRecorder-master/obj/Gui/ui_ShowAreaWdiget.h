/********************************************************************************
** Form generated from reading UI file 'ShowAreaWdiget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWAREAWDIGET_H
#define UI_SHOWAREAWDIGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAreaWdiget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_frame;
    QVBoxLayout *verticalLayout_6;

    void setupUi(QWidget *ShowAreaWdiget)
    {
        if (ShowAreaWdiget->objectName().isEmpty())
            ShowAreaWdiget->setObjectName(QString::fromUtf8("ShowAreaWdiget"));
        ShowAreaWdiget->resize(660, 355);
        verticalLayout = new QVBoxLayout(ShowAreaWdiget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_frame = new QWidget(ShowAreaWdiget);
        widget_frame->setObjectName(QString::fromUtf8("widget_frame"));
        widget_frame->setStyleSheet(QString::fromUtf8("QWidget#widget_frame\n"
"{\n"
"	border:2px solid  rgb(255, 0, 0);\n"
"}\n"
""));
        verticalLayout_6 = new QVBoxLayout(widget_frame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget_frame);


        retranslateUi(ShowAreaWdiget);

        QMetaObject::connectSlotsByName(ShowAreaWdiget);
    } // setupUi

    void retranslateUi(QWidget *ShowAreaWdiget)
    {
        ShowAreaWdiget->setWindowTitle(QCoreApplication::translate("ShowAreaWdiget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowAreaWdiget: public Ui_ShowAreaWdiget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWAREAWDIGET_H
