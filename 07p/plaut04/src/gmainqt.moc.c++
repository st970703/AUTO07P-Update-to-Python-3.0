/****************************************************************************
** Meta object code from reading C++ file 'gmainqt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gmainqt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gmainqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DecSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_DecSpinBox[] = {
    "DecSpinBox\0"
};

void DecSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DecSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DecSpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_DecSpinBox,
      qt_meta_data_DecSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DecSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DecSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DecSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DecSpinBox))
        return static_cast<void*>(const_cast< DecSpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int DecSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_LineColorSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LineColorSpinBox[] = {
    "LineColorSpinBox\0\0value\0valueChangedCB(int)\0"
};

void LineColorSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LineColorSpinBox *_t = static_cast<LineColorSpinBox *>(_o);
        switch (_id) {
        case 0: _t->valueChangedCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LineColorSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LineColorSpinBox::staticMetaObject = {
    { &DecSpinBox::staticMetaObject, qt_meta_stringdata_LineColorSpinBox,
      qt_meta_data_LineColorSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LineColorSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LineColorSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LineColorSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LineColorSpinBox))
        return static_cast<void*>(const_cast< LineColorSpinBox*>(this));
    return DecSpinBox::qt_metacast(_clname);
}

int LineColorSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DecSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_LinePatternComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LinePatternComboBox[] = {
    "LinePatternComboBox\0\0position\0"
    "valueChangedCB(int)\0"
};

void LinePatternComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LinePatternComboBox *_t = static_cast<LinePatternComboBox *>(_o);
        switch (_id) {
        case 0: _t->valueChangedCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LinePatternComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LinePatternComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_LinePatternComboBox,
      qt_meta_data_LinePatternComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinePatternComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinePatternComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinePatternComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinePatternComboBox))
        return static_cast<void*>(const_cast< LinePatternComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int LinePatternComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PreferDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      49,   13,   13,   13, 0x0a,
      83,   13,   13,   13, 0x0a,
     110,   13,   13,   13, 0x0a,
     156,  150,   13,   13, 0x0a,
     192,  150,   13,   13, 0x0a,
     222,  150,   13,   13, 0x0a,
     253,  150,   13,   13, 0x0a,
     288,  284,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PreferDialog[] = {
    "PreferDialog\0\0closePreferDialogAndGiveUpChange()\0"
    "closePreferDialogAndUpdateScene()\0"
    "savePreferAndUpdateScene()\0"
    "applyPreferDialogChangeAndUpdateScene()\0"
    "which\0graphCoordinateSystemToggledCB(int)\0"
    "graphTypeWidgetToggledCB(int)\0"
    "graphStyleWidgetToggledCB(int)\0"
    "graphCoordWidgetToggledCB(int)\0bit\0"
    "defaultGraphWidgetToggledCB(int)\0"
};

void PreferDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreferDialog *_t = static_cast<PreferDialog *>(_o);
        switch (_id) {
        case 0: _t->closePreferDialogAndGiveUpChange(); break;
        case 1: _t->closePreferDialogAndUpdateScene(); break;
        case 2: _t->savePreferAndUpdateScene(); break;
        case 3: _t->applyPreferDialogChangeAndUpdateScene(); break;
        case 4: _t->graphCoordinateSystemToggledCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->graphTypeWidgetToggledCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->graphStyleWidgetToggledCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->graphCoordWidgetToggledCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->defaultGraphWidgetToggledCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreferDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreferDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreferDialog,
      qt_meta_data_PreferDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreferDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreferDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreferDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreferDialog))
        return static_cast<void*>(const_cast< PreferDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PreferDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      25,   19,   11,   11, 0x0a,
      43,   19,   11,   11, 0x0a,
      61,   11,   11,   11, 0x0a,
      79,   19,   11,   11, 0x0a,
      98,   11,   11,   11, 0x0a,
     117,   19,   11,   11, 0x0a,
     136,   11,   11,   11, 0x0a,
     155,   19,   11,   11, 0x0a,
     172,   11,   11,   11, 0x0a,
     189,   19,   11,   11, 0x0a,
     207,   11,   11,   11, 0x0a,
     227,   11,   11,   11, 0x0a,
     245,   11,   11,   11, 0x0a,
     256,   11,   11,   11, 0x0a,
     277,   11,   11,   11, 0x0a,
     300,   11,   11,   11, 0x0a,
     323,   11,   11,   11, 0x0a,
     346,   11,   11,   11, 0x0a,
     371,   11,   11,   11, 0x0a,
     403,   11,   11,   11, 0x0a,
     441,  432,   11,   11, 0x0a,
     459,  432,   11,   11, 0x0a,
     475,  432,   11,   11, 0x0a,
     492,   11,   11,   11, 0x0a,
     513,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0quit()\0which\0fileMenuPick(int)\0"
    "typeMenuPick(int)\0typeMenuDisplay()\0"
    "styleMenuPick(int)\0styleMenuDisplay()\0"
    "coordMenuPick(int)\0coordMenuDisplay()\0"
    "optMenuPick(int)\0optMenuDisplay()\0"
    "editMenuPick(int)\0centerMenuDisplay()\0"
    "showAboutDialog()\0showHelp()\0"
    "createPreferDialog()\0xListCallBack(QString)\0"
    "yListCallBack(QString)\0zListCallBack(QString)\0"
    "lblListCallBack(QString)\0"
    "colorMethodSelectionCB(QString)\0"
    "numPeriodAnimatedCB(QString)\0position\0"
    "orbitSpeedCB(int)\0satSpeedCB(int)\0"
    "lineWidthCB(int)\0dimensionToggledCB()\0"
    "createBdBoxCB()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->quit(); break;
        case 1: _t->fileMenuPick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->typeMenuPick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->typeMenuDisplay(); break;
        case 4: _t->styleMenuPick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->styleMenuDisplay(); break;
        case 6: _t->coordMenuPick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->coordMenuDisplay(); break;
        case 8: _t->optMenuPick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->optMenuDisplay(); break;
        case 10: _t->editMenuPick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->centerMenuDisplay(); break;
        case 12: _t->showAboutDialog(); break;
        case 13: _t->showHelp(); break;
        case 14: _t->createPreferDialog(); break;
        case 15: _t->xListCallBack((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->yListCallBack((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->zListCallBack((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->lblListCallBack((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->colorMethodSelectionCB((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->numPeriodAnimatedCB((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->orbitSpeedCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->satSpeedCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->lineWidthCB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->dimensionToggledCB(); break;
        case 25: _t->createBdBoxCB(); break;
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
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
