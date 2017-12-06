#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#include <QtGui/QMainWindow>
#include "ui_formulaire.h"
#include "Personne.h"
#include "Candidat.h"
#include "Adresse.h"
#include <string>
#include <vector>

using namespace elections;

class Formulaire : public QMainWindow
{
    Q_OBJECT

public:
    Formulaire(QWidget *parent = 0);
    ~Formulaire();
    void ajouterCandidat(const std::string& p_nas,
    		const std::string& p_prenom,
    		const std::string& p_nom,
    		const util::Date& p_dateNaissance,
    		const util::Adresse& p_adresse,
    		int p_parti);

private slots:
	void dialogCandidat();

private:
    Ui::FormulaireClass ui;
    std::vector<Personne*> m_vPersonne;
};

#endif // FORMULAIRE_H
