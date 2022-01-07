/********************************************************************************
** Form generated from reading UI file 'ShowRedRectWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWREDRECTWIDGET_H
#define UI_SHOWREDRECTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowRedRectWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;

    void setupUi(QWidget *ShowRedRectWidget)
    {
        if (ShowRedRectWidget->objectName().isEmpty())
            ShowRedRectWidget->setObjectName(QString::fromUtf8("ShowRedRectWidget"));
        ShowRedRectWidget->resize(460, 341);
        verticalLayout = new QVBoxLayout(ShowRedRectWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(ShowRedRectWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("border:2px dashed #ff0000;"));

        verticalLayout->addWidget(widget);


        retranslateUi(ShowRedRectWidget);

        QMetaObject::connectSlotsByName(ShowRedRectWidget);
    } // setupUi

    void retranslateUi(QWidget *ShowRedRectWidget)
    {
        ShowRedRectWidget->setWindowTitle(QCoreApplication::translate("ShowRedRectWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowRedRectWidget: public Ui_ShowRedRectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWREDRECTWIDGET_H
