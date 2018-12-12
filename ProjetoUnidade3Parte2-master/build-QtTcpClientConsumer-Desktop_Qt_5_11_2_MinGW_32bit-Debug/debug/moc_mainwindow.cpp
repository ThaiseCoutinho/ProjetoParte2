/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtTcpClientConsumer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[10];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "emiteDados"
QT_MOC_LITERAL(2, 22, 13), // "vector<float>"
QT_MOC_LITERAL(3, 36, 0), // ""
QT_MOC_LITERAL(4, 37, 7), // "getHost"
QT_MOC_LITERAL(5, 45, 10), // "tcpConnect"
QT_MOC_LITERAL(6, 56, 13), // "tcpDisconnect"
QT_MOC_LITERAL(7, 70, 9), // "mudaTempo"
QT_MOC_LITERAL(8, 80, 6), // "_tempo"
QT_MOC_LITERAL(9, 87, 12) // "timerControl"

    },
    "MainWindow\0emiteDados\0vector<float>\0"
    "\0getHost\0tcpConnect\0tcpDisconnect\0"
    "mudaTempo\0_tempo\0timerControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   49,    3, 0x0a /* Public */,
       5,    0,   50,    3, 0x0a /* Public */,
       6,    0,   51,    3, 0x0a /* Public */,
       7,    1,   52,    3, 0x0a /* Public */,
       9,    0,   55,    3, 0x0a /* Public */,

 // signals: parameters
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2,    3,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { vector<float> _r = _t->emiteDados((*reinterpret_cast< vector<float>(*)>(_a[1])),(*reinterpret_cast< vector<float>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vector<float>*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->getHost(); break;
        case 2: _t->tcpConnect(); break;
        case 3: _t->tcpDisconnect(); break;
        case 4: _t->mudaTempo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->timerControl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = vector<float> (MainWindow::*)(vector<float> , vector<float> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::emiteDados)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
vector<float> MainWindow::emiteDados(vector<float> _t1, vector<float> _t2)
{
    vector<float> _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
