/********************************************************************************
** Form generated from reading UI file 'SelectAreaWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTAREAWIDGET_H
#define UI_SELECTAREAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "src/CaptureTask/SelectAreaWidget/ShowAreaWdiget.h"

QT_BEGIN_NAMESPACE

class Ui_SelectAreaWidget
{
public:
    ShowAreaWdiget *widget;

    void setupUi(QWidget *SelectAreaWidget)
    {
        if (SelectAreaWidget->objectName().isEmpty())
            SelectAreaWidget->setObjectName(QString::fromUtf8("SelectAreaWidget"));
        SelectAreaWidget->resize(685, 397);
        widget = new ShowAreaWdiget(SelectAreaWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 80, 451, 231));

        retranslateUi(SelectAreaWidget);

        QMetaObject::connectSlotsByName(SelectAreaWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectAreaWidget)
    {
        SelectAreaWidget->setWindowTitle(QCoreApplication::translate("SelectAreaWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectAreaWidget: public Ui_SelectAreaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTAREAWIDGET_H
