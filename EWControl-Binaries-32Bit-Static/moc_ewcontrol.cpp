/****************************************************************************
** Meta object code from reading C++ file 'ewcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ewcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ewcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ewcontrol_t {
    QByteArrayData data[14];
    char stringdata[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ewcontrol_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ewcontrol_t qt_meta_stringdata_ewcontrol = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ewcontrol"
QT_MOC_LITERAL(1, 10, 26), // "on_actionConnect_triggered"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 29), // "on_actionDisconnect_triggered"
QT_MOC_LITERAL(4, 68, 24), // "on_actionDebug_triggered"
QT_MOC_LITERAL(5, 93, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(6, 117, 18), // "on_StopMod_clicked"
QT_MOC_LITERAL(7, 136, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(8, 155, 17), // "on_ResMod_clicked"
QT_MOC_LITERAL(9, 173, 19), // "on_ReconfEW_clicked"
QT_MOC_LITERAL(10, 193, 9), // "beginauto"
QT_MOC_LITERAL(11, 203, 5), // "begin"
QT_MOC_LITERAL(12, 209, 29), // "on_actionAutoUpdate_triggered"
QT_MOC_LITERAL(13, 239, 23) // "on_actionHelp_triggered"

    },
    "ewcontrol\0on_actionConnect_triggered\0"
    "\0on_actionDisconnect_triggered\0"
    "on_actionDebug_triggered\0"
    "on_actionQuit_triggered\0on_StopMod_clicked\0"
    "on_refresh_clicked\0on_ResMod_clicked\0"
    "on_ReconfEW_clicked\0beginauto\0begin\0"
    "on_actionAutoUpdate_triggered\0"
    "on_actionHelp_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ewcontrol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ewcontrol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ewcontrol *_t = static_cast<ewcontrol *>(_o);
        switch (_id) {
        case 0: _t->on_actionConnect_triggered(); break;
        case 1: _t->on_actionDisconnect_triggered(); break;
        case 2: _t->on_actionDebug_triggered(); break;
        case 3: _t->on_actionQuit_triggered(); break;
        case 4: _t->on_StopMod_clicked(); break;
        case 5: _t->on_refresh_clicked(); break;
        case 6: _t->on_ResMod_clicked(); break;
        case 7: _t->on_ReconfEW_clicked(); break;
        case 8: { int _r = _t->beginauto();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->begin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->on_actionAutoUpdate_triggered(); break;
        case 11: _t->on_actionHelp_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject ewcontrol::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ewcontrol.data,
      qt_meta_data_ewcontrol,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ewcontrol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ewcontrol::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ewcontrol.stringdata))
        return static_cast<void*>(const_cast< ewcontrol*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ewcontrol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
