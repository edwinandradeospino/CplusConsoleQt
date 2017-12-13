/****************************************************************************
** Meta object code from reading C++ file 'formulaire.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../formulaire.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formulaire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Formulaire[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      81,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Formulaire[] = {
    "Formulaire\0\0dialogAjouterCandidat()\0"
    "dialogAjouterElecteur()\0selectionLineTable()\0"
    "supprimerCandidat()\0"
};

void Formulaire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Formulaire *_t = static_cast<Formulaire *>(_o);
        switch (_id) {
        case 0: _t->dialogAjouterCandidat(); break;
        case 1: _t->dialogAjouterElecteur(); break;
        case 2: _t->selectionLineTable(); break;
        case 3: _t->supprimerCandidat(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Formulaire::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Formulaire::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Formulaire,
      qt_meta_data_Formulaire, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Formulaire::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Formulaire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Formulaire::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Formulaire))
        return static_cast<void*>(const_cast< Formulaire*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Formulaire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
