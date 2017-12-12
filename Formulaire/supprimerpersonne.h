#ifndef SUPPRIMERPERSONNE_H
#define SUPPRIMERPERSONNE_H

#include <QtGui/QDialog>
#include "ui_supprimerpersonne.h"

class SupprimerPersonne : public QDialog
{
    Q_OBJECT

public:
    SupprimerPersonne(QWidget *parent = 0);
    ~SupprimerPersonne();
    QString reqNom() const;
    QString reqPrenom() const;

private slots:
	void validerSuppression();

private:
    Ui::SupprimerPersonneClass ui;

};

#endif // SUPPRIMERPERSONNE_H
