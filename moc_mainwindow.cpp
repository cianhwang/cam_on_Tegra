/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   41,   41,   41, 0x08,
      42,   41,   41,   41, 0x08,
      73,   41,   41,   41, 0x08,
     117,   41,   41,   41, 0x08,
     149,   41,   41,   41, 0x08,
     183,   41,   41,   41, 0x08,
     214,   41,   41,   41, 0x08,
     249,   41,   41,   41, 0x08,
     284,   41,   41,   41, 0x08,
     319,   41,   41,   41, 0x08,
     354,   41,   41,   41, 0x08,
     389,   41,   41,   41, 0x08,
     424,   41,   41,   41, 0x08,
     459,   41,   41,   41, 0x08,
     493,  523,   41,   41, 0x08,
     531,   41,   41,   41, 0x08,
     568,   41,   41,   41, 0x08,
     605,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0on_pushButton_AF_On_clicked()\0"
    "\0on_pushButton_AF_Off_clicked()\0"
    "on_lineEdit_FocusPosition_editingFinished()\0"
    "on_radioButton_Direct_clicked()\0"
    "on_radioButton_Infinity_clicked()\0"
    "on_radioButton_Macro_clicked()\0"
    "on_pushButton_FocusApply_clicked()\0"
    "on_radioButton_OIS_Mode0_clicked()\0"
    "on_radioButton_OIS_Mode1_clicked()\0"
    "on_radioButton_OIS_Mode2_clicked()\0"
    "on_radioButton_OIS_Mode3_clicked()\0"
    "on_radioButton_OIS_Mode4_clicked()\0"
    "on_radioButton_OIS_Mode5_clicked()\0"
    "on_pushButton_OIS_Apply_clicked()\0"
    "on_checkBox_LSC_clicked(bool)\0checked\0"
    "on_pushButton_Still12M_NML_clicked()\0"
    "on_pushButton_Still12M_HDR_clicked()\0"
    "on_pushButton_Highspeed_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_AF_On_clicked(); break;
        case 1: _t->on_pushButton_AF_Off_clicked(); break;
        case 2: _t->on_lineEdit_FocusPosition_editingFinished(); break;
        case 3: _t->on_radioButton_Direct_clicked(); break;
        case 4: _t->on_radioButton_Infinity_clicked(); break;
        case 5: _t->on_radioButton_Macro_clicked(); break;
        case 6: _t->on_pushButton_FocusApply_clicked(); break;
        case 7: _t->on_radioButton_OIS_Mode0_clicked(); break;
        case 8: _t->on_radioButton_OIS_Mode1_clicked(); break;
        case 9: _t->on_radioButton_OIS_Mode2_clicked(); break;
        case 10: _t->on_radioButton_OIS_Mode3_clicked(); break;
        case 11: _t->on_radioButton_OIS_Mode4_clicked(); break;
        case 12: _t->on_radioButton_OIS_Mode5_clicked(); break;
        case 13: _t->on_pushButton_OIS_Apply_clicked(); break;
        case 14: _t->on_checkBox_LSC_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_pushButton_Still12M_NML_clicked(); break;
        case 16: _t->on_pushButton_Still12M_HDR_clicked(); break;
        case 17: _t->on_pushButton_Highspeed_clicked(); break;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
