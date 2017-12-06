#ifndef CANDIDATINSCRIPTIONS_H
#define CANDIDATINSCRIPTIONS_H

#include <QtGui/QDialog>
#include "ui_candidatinscriptions.h"

class CandidatInscriptions : public QDialog
{
    Q_OBJECT

public:
    CandidatInscriptions(QWidget *parent = 0);
    ~CandidatInscriptions();
    QString reqNom() const;
    QString reqPrenom() const;
    QString reqNas() const;
    QString reqDateDeNaissance() const;
    QString reqAdresse() const;
    QString reqPartiPolitique() const;



private slots:
	void validerCandidat();

private:
    Ui::CandidatInscriptionsClass ui;

};

#endif // CANDIDATINSCRIPTIONS_H
