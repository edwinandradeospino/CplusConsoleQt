#ifndef ELECTEURINSCRITS_H
#define ELECTEURINSCRITS_H

#include <QtGui/QDialog>
#include "ui_electeurinscrits.h"
#include "Date.h"
#include "Adresse.h"


class ElecteurInscrits : public QDialog
{
    Q_OBJECT

public:
    ElecteurInscrits(QWidget *parent = 0);
    ~ElecteurInscrits();
    QString reqNom() const;
    QString reqPrenom() const;
    QString reqNas() const;
    util::Date reqDateNaissance() const;
    util::Adresse reqAdresseqt() const;
    int numeroCivique() const;
    std::string reqRue() const;
    std::string reqCodePostal() const;
    std::string reqVille() const;
    std::string reqProvince() const;

private slots:
   	void validerElecteur();

private:
    Ui::ElecteurInscritsClass ui;
    util::Date m_dateNaissance;
};

#endif // ELECTEURINSCRITS_H
