/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Feb 21 23:03:09 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,
     112,   11,   11,   11, 0x08,
     153,  147,   11,   11, 0x08,
     180,   11,   11,   11, 0x08,
     195,   11,   11,   11, 0x08,
     221,   11,   11,   11, 0x08,
     245,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0actionRandom_triggered()\0"
    "actionAbout_triggered()\0"
    "actionConfigure_triggered()\0"
    "actionMode_triggered()\0"
    "actionTriggerFigure_triggered(int)\0"
    "event\0resizeEvent(QResizeEvent*)\0"
    "clean_reload()\0actionAuto_triggered(int)\0"
    "actionTime_changed(int)\0timeslide()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->actionRandom_triggered(); break;
        case 1: _t->actionAbout_triggered(); break;
        case 2: _t->actionConfigure_triggered(); break;
        case 3: _t->actionMode_triggered(); break;
        case 4: _t->actionTriggerFigure_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 6: _t->clean_reload(); break;
        case 7: _t->actionAuto_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->actionTime_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->timeslide(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
