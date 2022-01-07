/****************************************************************************
** Meta object code from reading C++ file 'DeviceSettingDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/DeviceTest/DeviceSettingDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceSettingDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceSettingDialog_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceSettingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceSettingDialog_t qt_meta_stringdata_DeviceSettingDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DeviceSettingDialog"
QT_MOC_LITERAL(1, 20, 13), // "sig_ChangeMic"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "state"
QT_MOC_LITERAL(4, 41, 12), // "slotBtnClick"
QT_MOC_LITERAL(5, 54, 7), // "isChked"
QT_MOC_LITERAL(6, 62, 23), // "slotCurrentIndexChanged"
QT_MOC_LITERAL(7, 86, 5), // "index"
QT_MOC_LITERAL(8, 92, 15), // "slotSliderMoved"
QT_MOC_LITERAL(9, 108, 5), // "value"
QT_MOC_LITERAL(10, 114, 23), // "slotAudioInVolumeGetted"
QT_MOC_LITERAL(11, 138, 6), // "buffer"
QT_MOC_LITERAL(12, 145, 27), // "slotAudioDeviceStateChanged"
QT_MOC_LITERAL(13, 173, 13) // "QAudio::State"

    },
    "DeviceSettingDialog\0sig_ChangeMic\0\0"
    "state\0slotBtnClick\0isChked\0"
    "slotCurrentIndexChanged\0index\0"
    "slotSliderMoved\0value\0slotAudioInVolumeGetted\0"
    "buffer\0slotAudioDeviceStateChanged\0"
    "QAudio::State"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceSettingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
      10,    1,   56,    2, 0x08 /* Private */,
      12,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, 0x80000000 | 13,    3,

       0        // eod
};

void DeviceSettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceSettingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_ChangeMic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotBtnClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotAudioInVolumeGetted((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->slotAudioDeviceStateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceSettingDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceSettingDialog::sig_ChangeMic)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceSettingDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DeviceSettingDialog.data,
    qt_meta_data_DeviceSettingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceSettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceSettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceSettingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DeviceSettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DeviceSettingDialog::sig_ChangeMic(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
