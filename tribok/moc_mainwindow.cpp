/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: ons mar 30 23:11:35 2005
**      by: The Qt Meta Object Compiler version 55 (Qt 4.0.0-b2-snapshot-20050318)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 55
#error "This file was generated using the moc from 4.0.0-b2-snapshot-20050318. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_MainWindow[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // members
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      20,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0close()\0init()\0showSettings()\0openData()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
	return static_cast<void*>(const_cast<MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMember) {
        switch (_id) {
        case 0: close(); break;
        case 1: init(); break;
        case 2: showSettings(); break;
        case 3: openData(); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_frmLoadData[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // members
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      20,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_frmLoadData[] = {
    "frmLoadData\0\0init()\0bytN()\0"
};

const QMetaObject frmLoadData::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_frmLoadData,
      qt_meta_data_frmLoadData, 0 }
};

const QMetaObject *frmLoadData::metaObject() const
{
    return &staticMetaObject;
}

void *frmLoadData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_frmLoadData))
	return static_cast<void*>(const_cast<frmLoadData*>(this));
    return QDialog::qt_metacast(_clname);
}

int frmLoadData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMember) {
        switch (_id) {
        case 0: init(); break;
        case 1: bytN(); break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_TabDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // members
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_TabDialog[] = {
    "TabDialog\0"
};

const QMetaObject TabDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TabDialog,
      qt_meta_data_TabDialog, 0 }
};

const QMetaObject *TabDialog::metaObject() const
{
    return &staticMetaObject;
}

void *TabDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabDialog))
	return static_cast<void*>(const_cast<TabDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TabDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_databasTab[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // members
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      19,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,
      45,   11,   11,   11, 0x08,
      56,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_databasTab[] = {
    "databasTab\0\0init()\0showSettings()\0testConn()\0saveConn()\0exit()\0"
};

const QMetaObject databasTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_databasTab,
      qt_meta_data_databasTab, 0 }
};

const QMetaObject *databasTab::metaObject() const
{
    return &staticMetaObject;
}

void *databasTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_databasTab))
	return static_cast<void*>(const_cast<databasTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int databasTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMember) {
        switch (_id) {
        case 0: init(); break;
        case 1: showSettings(); break;
        case 2: testConn(); break;
        case 3: saveConn(); break;
        case 4: exit(); break;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_updateTab[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // members
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_updateTab[] = {
    "updateTab\0"
};

const QMetaObject updateTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_updateTab,
      qt_meta_data_updateTab, 0 }
};

const QMetaObject *updateTab::metaObject() const
{
    return &staticMetaObject;
}

void *updateTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_updateTab))
	return static_cast<void*>(const_cast<updateTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int updateTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_layoutTab[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // members
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_layoutTab[] = {
    "layoutTab\0"
};

const QMetaObject layoutTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_layoutTab,
      qt_meta_data_layoutTab, 0 }
};

const QMetaObject *layoutTab::metaObject() const
{
    return &staticMetaObject;
}

void *layoutTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_layoutTab))
	return static_cast<void*>(const_cast<layoutTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int layoutTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
