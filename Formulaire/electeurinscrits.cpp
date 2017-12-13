#include "electeurinscrits.h"
#include "qmessagebox.h"

ElecteurInscrits::ElecteurInscrits(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	//pour charger la date courrant dans la class
	ui.dateEdit->setDate(QDate::currentDate());
	// connexion pour le bouton close
	QObject::connect(ui.pushButton_3,SIGNAL(clicked()), this, SLOT(close()));
	// connexion qui permets la fenetre principale.
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(validerElecteur()));

}

/**
* \ brief
* \
*/
ElecteurInscrits::~ElecteurInscrits()
{

}

/**
* \ brief
* \
*/
void ElecteurInscrits::validerElecteur() {
	if(ui.LineEditNom->text().isEmpty()) {
		QString message("Le nom ne peut pas être vide");
		QMessageBox::information(this,"Erreur",message);
		return;
	}
	if(ui.lineEdit_2->text().isEmpty()){
		QMessageBox::information(this, "Erreur", "Le Prenom ne peut etre vide");
		return;
	}
	if(ui.lineEdit_3->text().isEmpty()){
		QMessageBox::information(this,"Erreur","Le NAS ne peut etre vide");
		return;
	}
	QDate dateCourrante = QDate::currentDate();
	if (ui.dateEdit->date() == dateCourrante){
		QMessageBox::information(this,"Erreur","La Date de naissance n'est pas valide");
		return;
	} else {
		m_dateNaissance.asgDate(ui.dateEdit->date().day(),ui.dateEdit->date().month(), ui.dateEdit->date().year());
		accept();
	}




//		else if (ui.lineEdit_5->text().isEmpty()) {
//			QMessageBox::information(this,"Erreur", "L'adresse ne peut  etre vide");
//			return;
//		}
//		else if (ui.lineEdit_6->text().isEmpty()) {
//			QMessageBox::information(this,"Erreur", "Le parti politique ne peut  etre vide");
//			return;
//		}
//	{
//		accept(); // me permet charger vers l'objet courrant tous les champs.
//	}
}
/**
* \ brief
* \
*/
QString ElecteurInscrits::reqNom() const {
	return ui.LineEditNom->text();
}
/**
* \ brief
* \
*/
QString ElecteurInscrits::reqPrenom() const {
	return ui.lineEdit_2->text();
}
/**
* \ brief
* \
*/
QString ElecteurInscrits::reqNas() const {
	return ui.lineEdit_3->text();
}
/**
* \ brief
* \
*/
util::Date ElecteurInscrits::reqDateNaissance() const {
	return m_dateNaissance;
}
/**
* \ brief
* \
*/
int ElecteurInscrits::numeroCivique() const {
	return ui.lineEdit_5->text().toInt() ;
}

std::string ElecteurInscrits::reqRue() const {
	return ui.lineEdit_6->text().toStdString();
}
/**
* \ brief
* \
*/
std::string ElecteurInscrits::reqCodePostal() const {
	return ui.lineEdit_7->text().toStdString();
}
/**
* \ brief
* \
*/
std::string ElecteurInscrits::reqVille() const {
	return ui.lineEdit_8->text().toStdString();
}
/**
* \ brief
* \
*/
std::string ElecteurInscrits::reqProvince() const {
	return ui.lineEdit_9->text().toStdString();
}

/**
* \ brief
* \
*/
util::Adresse ElecteurInscrits::reqAdresseqt() const {
	return (util::Adresse(numeroCivique(),reqRue(),reqCodePostal(),reqVille(),reqProvince()));
}
