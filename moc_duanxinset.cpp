/****************************************************************************
** Meta object code from reading C++ file 'duanxinset.h'
**
** Created: Mon Jan 14 22:21:49 2013
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "duanxinset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'duanxinset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DuanXinSet[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      62,   11,   11,   11, 0x08,
      99,   88,   11,   11, 0x08,
     135,   88,   11,   11, 0x08,
     173,   11,   11,   11, 0x08,
     198,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DuanXinSet[] = {
    "DuanXinSet\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0row,column\0"
    "on_tableWidget_cellClicked(int,int)\0"
    "on_tableWidget_2_cellClicked(int,int)\0"
    "on_radioButton_clicked()\0"
    "on_radioButton_2_clicked()\0"
};

const QMetaObject DuanXinSet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DuanXinSet,
      qt_meta_data_DuanXinSet, 0 }
};

const QMetaObject *DuanXinSet::metaObject() const
{
    return &staticMetaObject;
}

void *DuanXinSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DuanXinSet))
        return static_cast<void*>(const_cast< DuanXinSet*>(this));
    return QWidget::qt_metacast(_clname);
}

int DuanXinSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: on_pushButton_3_clicked(); break;
        case 3: on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_tableWidget_2_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: on_radioButton_clicked(); break;
        case 6: on_radioButton_2_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
