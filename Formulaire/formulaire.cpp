#include "formulaire.h"
#include "candidatinscriptions.h"


Formulaire::Formulaire(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(close()));
	QObject::connect(ui.actionQuitter ,SIGNAL(triggered()), this, SLOT(close()));
	QObject::connect(ui.actionInscription_d_un_Candidat_2, SIGNAL(triggered()),this, SLOT(dialogCandidat()));
}

Formulaire::~Formulaire()
{

}

void Formulaire::dialogCandidat(){
	/*
	CandidatInscriptions saisieCandidat(this);
	if (saisieCandidat.exec()) {
		ajouterCandidat(saisieCandidat.reqNom().toStdString(),
				saisieCandidat.reqPrenom().toStdString(),
				saisieCandidat.reqNas().toStdString(),
				saisieCandidat.reqDateDeNaissance().toStdString(),
				saisieCandidat.reqAdresse().toStdString(),
				saisieCandidat.reqPartiPolitique());
	}
*/
}

void Formulaire::ajouterCandidat(const std::string& p_nas,
    		const std::string& p_prenom,
    		const std::string& p_nom,
    		const util::Date& p_dateNaissance,
    		const util::Adresse& p_adresse,
    		int p_parti){
				elections::Candidat UnCandidat(p_nas,p_prenom,p_nom, util::Date(1,2,1990),
				util::Adresse(12,"Rue","Quebec","Q1Q 3H3","Qc"),p_parti);
			m_vPersonne.push_back(new Candidat(UnCandidat));
}
