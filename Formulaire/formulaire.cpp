#include "formulaire.h"
#include "candidatinscriptions.h"
#include "electeurinscrits.h"
#include "PersonneException.h"
#include "Circonscription.h"
#include <QMessageBox>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include "supprimerpersonne.h"

Formulaire::Formulaire(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	ui.tableWidget->setColumnWidth(0, 80);
	ui.tableWidget->setColumnWidth(1,80);
	ui.tableWidget->setColumnWidth(2,220);
	QObject::connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(close()));
	QObject::connect(ui.actionQuitter ,SIGNAL(triggered()), this, SLOT(close()));
	QObject::connect(ui.actionInscription_d_un_Candidat_2, SIGNAL(triggered()), SLOT(dialogAjouterCandidat()));
	QObject::connect(ui.actionDesinscription_d_une_Personne,SIGNAL(triggered()), this, SLOT(supprimerCandidat()));
	QObject::connect(ui.actionInscription_d_un_Electeur, SIGNAL(triggered()), SLOT(dialogAjouterElecteur()));
}

/**
* \ brief
* \
*/
Formulaire::~Formulaire()
{
	sauvegarderDonnees();
	for (size_t i = 0 ; i < m_vPersonne.size();i++){
		delete m_vPersonne[i];
	}
}

/**
* \ brief
* \
*/
void Formulaire::dialogAjouterCandidat(){

	CandidatInscriptions saisieCandidat(this);

	if (saisieCandidat.exec()){

		ajouterCandidat(saisieCandidat.reqNom().toStdString(),
				saisieCandidat.reqPrenom().toStdString(),
				saisieCandidat.reqNas().toStdString(),
				saisieCandidat.reqDateNaissance(),
				saisieCandidat.reqAdresseqt(),
				saisieCandidat.reqPartiPolitique());

		int nombreDeLigne = ui.tableWidget->rowCount();
		QString date = QString::fromStdString(saisieCandidat.reqDateNaissance().reqDateFormatee());
		ui.tableWidget->setRowCount(nombreDeLigne + 1);
		ui.tableWidget->setItem(nombreDeLigne, 0, new QTableWidgetItem(saisieCandidat.reqNom()));
		ui.tableWidget->setItem(nombreDeLigne, 1, new QTableWidgetItem(saisieCandidat.reqPrenom()));
		ui.tableWidget->setItem(nombreDeLigne, 2, new QTableWidgetItem(date));
	}
}
/**
* \ brief
* \
*/
void Formulaire::ajouterCandidat(const std::string& p_nas,
        		const std::string& p_prenom,
        		const std::string& p_nom,
        		const util::Date& p_dateNaissance,
				const util::Adresse& p_adresse,
				int p_parti){

			try {
				elections::Candidat AutreCandidat(p_nom, p_prenom, p_nas,
						p_dateNaissance,p_adresse,p_parti);
				if (personneEstDejaPresente(p_nas)){
				//	throw PersonneDejaPresentException("La personne est deja presente dasn la liste.");
					m_vPersonne.push_back(new Candidat(AutreCandidat));
				}
			} catch (PersonneDejaPresentException& e) {
				QString message = e.what();
				QMessageBox::information(this,"Erreur", message);
			}

}
/**
* \ brief
* \
*/
void Formulaire::dialogAjouterElecteur(){

	ElecteurInscrits saisieElecteur(this);

	if (saisieElecteur.exec()){

		ajouterElecteur(saisieElecteur.reqNom().toStdString(),
				saisieElecteur.reqPrenom().toStdString(),
				saisieElecteur.reqNas().toStdString(),
				saisieElecteur.reqDateNaissance(),
				saisieElecteur.reqAdresseqt());

		int nombreDeLigne = ui.tableWidget->rowCount();
		QString date = QString::fromStdString(saisieElecteur.reqDateNaissance().reqDateFormatee());
		ui.tableWidget->setRowCount(nombreDeLigne + 1);
		ui.tableWidget->setItem(nombreDeLigne, 0, new QTableWidgetItem(saisieElecteur.reqNom()));
		ui.tableWidget->setItem(nombreDeLigne, 1, new QTableWidgetItem(saisieElecteur.reqPrenom()));
		ui.tableWidget->setItem(nombreDeLigne, 2, new QTableWidgetItem(date));
	}
}
/**
* \ brief
* \
*/
void Formulaire::ajouterElecteur(const std::string& p_nas,
        		const std::string& p_prenom,
        		const std::string& p_nom,
        		const util::Date& p_dateNaissance,
				const util::Adresse& p_adresse){

			try {
				elections::Electeur AutreElecteur(p_nom, p_prenom, p_nas,
						p_dateNaissance,p_adresse);
				if (personneEstDejaPresente(p_nas)){
				//	throw PersonneDejaPresentException("La personne est deja presente dasn la liste.");
					m_vPersonne.push_back(new Electeur(AutreElecteur));
				}
			} catch (PersonneDejaPresentException& e) {
				QString message = e.what();
				QMessageBox::information(this,"Erreur", message);
			}

}
/**
* \ brief
* \
*/
bool Formulaire::personneEstDejaPresente(const std::string& p_nas) const {
	bool personnePresent=false;
	std::vector<elections::Personne *>::const_iterator it;
		for(it = m_vPersonne.begin();it < m_vPersonne.end(); it++)
		{
		    if((*it)->reqNas()== p_nas)
		    {
		    	personnePresent=true;
		    }
		}
	return true;
}
/**
* \ brief
* \
*/
void Formulaire::selectionLineTable(){

	int ligne = ui.tableWidget->currentRow();
	QTableWidgetItem *tNom = ui.tableWidget->item(ligne, 0);
	QTableWidgetItem *tPrenom = ui.tableWidget->item(ligne, 1);
	std::vector<Personne*>::const_iterator iter;
	for (iter = m_vPersonne.begin(); iter < m_vPersonne.end(); iter++) {
		if ((*iter)->reqNom() == (*tNom).text().toStdString() &&
			(*iter)->reqPrenom() == (*tPrenom).text().toStdString()) {
			ui.textBrowser->setText((*iter)->reqPersonneFormate().c_str());
		}
	}
}
/**
* \ brief
* \
*/
void Formulaire::sauvegarderDonnees() {
	//initialisatioin du file
	QFile file("Sauveur.txt");
	// ouvrir le file en QT
	if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
		return;
	// declaration de flux de donnes vers le file
	QTextStream flux(&file);
	// choisir le type de donnes
	flux.setCodec("UTF-8");
	//lecture du vector et charge du flux de donnes;
	for (size_t i = 0 ; i < m_vPersonne.size();i++){
		flux << m_vPersonne[i]->reqPersonneFormate().c_str();
	}
}
/**
* \ brief
* \
*/
void Formulaire::supprimerCandidat(){
	SupprimerPersonne suppressioinPersonne(this);
	if (suppressioinPersonne.exec()) {
		std::vector<elections::Personne *>::iterator it;
		for (it = m_vPersonne.begin(); it < m_vPersonne.end(); it++){
			if ((*it)->reqNom() == suppressioinPersonne.reqNom().toStdString() &&
				(*it)->reqPrenom() == suppressioinPersonne.reqPrenom().toStdString()){
				//delete le leck de la memoire
				delete(*it);
				//delete la donnée du vector
				it = m_vPersonne.erase(it);
			}
		}
		//affiche la liste des personnes sans tenir compte la personne effacée
		listePersonnes();
	}
}
/**
* \ brief
* \
*/
void Formulaire::listePersonnes() {
	// on efface tous le lignes de l'affichage de la liste
	int nbLigne = ui.tableWidget->rowCount();
	for (int i = nbLigne; i > 0; i--)
		ui.tableWidget->removeRow(i);
	// on affiche à nouveau la nouvelle liste.
	nbLigne = ui.tableWidget->rowCount();
	//on parcour le vecteur et on affiche la liste.
	std::vector<elections::Personne *>::iterator it;
	for (it = m_vPersonne.begin(); it < m_vPersonne.end(); it++) {
		QString date = QString::fromStdString((*it)->reqDateNaissance().reqDateFormatee());
		ui.tableWidget->setRowCount(nbLigne + 1);
		ui.tableWidget->setItem(nbLigne, 0, new QTableWidgetItem((*it)->reqNom().c_str()));
		ui.tableWidget->setItem(nbLigne, 1, new QTableWidgetItem((*it)->reqPrenom().c_str()));
		ui.tableWidget->setItem(nbLigne, 2, new QTableWidgetItem(date));
	}


}
