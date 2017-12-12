#ifndef ELECTEURINSCRITS_H
#define ELECTEURINSCRITS_H

#include <QtGui/QDialog>
#include "ui_electeurinscrits.h"

class ElecteurInscrits : public QDialog
{
    Q_OBJECT

public:
    ElecteurInscrits(QWidget *parent = 0);
    ~ElecteurInscrits();

private:
    Ui::ElecteurInscritsClass ui;
};

#endif // ELECTEURINSCRITS_H
