/****************************************************************************
** Meta object code from reading C++ file 'xpsclient.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../xpsclient.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xpsclient.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xpsClient_t {
    QByteArrayData data[4];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xpsClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xpsClient_t qt_meta_stringdata_xpsClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "xpsClient"
QT_MOC_LITERAL(1, 10, 10), // "emitString"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6) // "string"

    },
    "xpsClient\0emitString\0\0string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xpsClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void xpsClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        xpsClient *_t = static_cast<xpsClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (xpsClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&xpsClient::emitString)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject xpsClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_xpsClient.data,
      qt_meta_data_xpsClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *xpsClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xpsClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_xpsClient.stringdata0))
        return static_cast<void*>(const_cast< xpsClient*>(this));
    return QObject::qt_metacast(_clname);
}

int xpsClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void xpsClient::emitString(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_xpsWorker_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xpsWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xpsWorker_t qt_meta_stringdata_xpsWorker = {
    {
QT_MOC_LITERAL(0, 0, 9), // "xpsWorker"
QT_MOC_LITERAL(1, 10, 36), // "xpsQ8_updateStagesStatusAndPo..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 14), // "QList<QString>"
QT_MOC_LITERAL(4, 63, 20), // "statusesAndPositions"
QT_MOC_LITERAL(5, 84, 35), // "xpsQ8_checkStagesStatusAndPos..."
QT_MOC_LITERAL(6, 120, 10), // "xpsClient*"
QT_MOC_LITERAL(7, 131, 9) // "xpsClient"

    },
    "xpsWorker\0xpsQ8_updateStagesStatusAndPositions\0"
    "\0QList<QString>\0statusesAndPositions\0"
    "xpsQ8_checkStagesStatusAndPositions\0"
    "xpsClient*\0xpsClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xpsWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void xpsWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        xpsWorker *_t = static_cast<xpsWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xpsQ8_updateStagesStatusAndPositions((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 1: _t->xpsQ8_checkStagesStatusAndPositions((*reinterpret_cast< xpsClient*(*)>(_a[1]))); break;
        case 2: _t->xpsQ8_checkStagesStatusAndPositions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< xpsClient* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (xpsWorker::*_t)(QList<QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&xpsWorker::xpsQ8_updateStagesStatusAndPositions)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject xpsWorker::staticMetaObject = {
    { &xpsClient::staticMetaObject, qt_meta_stringdata_xpsWorker.data,
      qt_meta_data_xpsWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *xpsWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xpsWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_xpsWorker.stringdata0))
        return static_cast<void*>(const_cast< xpsWorker*>(this));
    return xpsClient::qt_metacast(_clname);
}

int xpsWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xpsClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void xpsWorker::xpsQ8_updateStagesStatusAndPositions(QList<QString> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
