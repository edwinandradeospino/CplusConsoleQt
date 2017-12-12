#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#include <QtGui/QMainWindow>
#include "ui_formulaire.h"
#include "Personne.h"
#include "Candidat.h"
#include "Adresse.h"
#include "Date.h"
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
    bool verifiePersonneAjoute(const elections::Personne& p_personne);


private slots:
	void dialogAjouterCandidat();
	void selectionLineTable();
	void supprimerCandidat();

private:
    Ui::FormulaireClass ui;
    std::vector<elections::Personne*> m_vPersonne;
    void sauvegarderDonnees();
    bool personneEstDejaPresente(const std::string& p_nas) const;
    void listePersonnes();
};

#endif // FORMULAIRE_H
