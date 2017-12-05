#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#include <QtGui/QMainWindow>
#include "ui_formulaire.h"

class Formulaire : public QMainWindow
{
    Q_OBJECT

public:
    Formulaire(QWidget *parent = 0);
    ~Formulaire();

private:
    Ui::FormulaireClass ui;
};

#endif // FORMULAIRE_H
