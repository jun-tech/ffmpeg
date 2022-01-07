/****************************************************************************
** Meta object code from reading C++ file 'MyCustomerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/Widget/CustomWidget/MyCustomerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyCustomerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyCustomerWidget_t {
    QByteArrayData data[9];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCustomerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCustomerWidget_t qt_meta_stringdata_MyCustomerWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MyCustomerWidget"
QT_MOC_LITERAL(1, 17, 15), // "sig_WindowMoved"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "rect"
QT_MOC_LITERAL(4, 39, 22), // "sig_WindowMoveFinished"
QT_MOC_LITERAL(5, 62, 22), // "sig_MouseRightBtnClick"
QT_MOC_LITERAL(6, 85, 24), // "on_btnMenu_Close_clicked"
QT_MOC_LITERAL(7, 110, 22), // "on_btnMenu_Max_clicked"
QT_MOC_LITERAL(8, 133, 22) // "on_btnMenu_Min_clicked"

    },
    "MyCustomerWidget\0sig_WindowMoved\0\0"
    "rect\0sig_WindowMoveFinished\0"
    "sig_MouseRightBtnClick\0on_btnMenu_Close_clicked\0"
    "on_btnMenu_Max_clicked\0on_btnMenu_Min_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCustomerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyCustomerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyCustomerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_WindowMoved((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 1: _t->sig_WindowMoveFinished((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 2: _t->sig_MouseRightBtnClick(); break;
        case 3: _t->on_btnMenu_Close_clicked(); break;
        case 4: _t->on_btnMenu_Max_clicked(); break;
        case 5: _t->on_btnMenu_Min_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyCustomerWidget::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCustomerWidget::sig_WindowMoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyCustomerWidget::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCustomerWidget::sig_WindowMoveFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyCustomerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCustomerWidget::sig_MouseRightBtnClick)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyCustomerWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MyCustomerWidget.data,
    qt_meta_data_MyCustomerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyCustomerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCustomerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyCustomerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MyCustomerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MyCustomerWidget::sig_WindowMoved(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyCustomerWidget::sig_WindowMoveFinished(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyCustomerWidget::sig_MouseRightBtnClick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
