#ifndef CANDIDATINSCRIPTIONS_H
#define CANDIDATINSCRIPTIONS_H

#include <QtGui/QDialog>
#include "ui_candidatinscriptions.h"
#include "Date.h"
#include "Adresse.h"


class CandidatInscriptions : public QDialog
{
    Q_OBJECT

public:
    CandidatInscriptions(QWidget *parent = 0);
    ~CandidatInscriptions();
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
    int reqPartiPolitique() const;

    //void ajouterCandidat();


private slots:
	void validerCandidat();

private:
    Ui::CandidatInscriptionsClass ui;
    util::Date m_dateNaissance;

};

#endif // CANDIDATINSCRIPTIONS_H
