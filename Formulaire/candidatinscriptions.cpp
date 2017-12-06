#include "candidatinscriptions.h"
#include "qmessagebox.h"

CandidatInscriptions::CandidatInscriptions(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton_3,SIGNAL(clicked()), this, SLOT(close()));
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(validerCandidat()));

}

CandidatInscriptions::~CandidatInscriptions()
{

}


void CandidatInscriptions::validerCandidat() {
	if(ui.lineEdit->text().isEmpty()) {
		QString message("Le nom ne peut pas être vide");
		QMessageBox::information(this,"Erreur",message);
		return;
	}
	else {
		accept();
	}
	if(ui.lineEdit_2->text().isEmpty()) {
		QMessageBox::information(this, "Erreur", "Le Prenom ne peut pas re vide");
		return;
	}
	else {
		accept();
	}
	if(ui.lineEdit_3->text().isEmpty()) {
		QMessageBox::information(this,"Erreur","Le NAS ne peut pas re vide");
		return;
	}
	else {
		accept();
	}
	if (ui.lineEdit_4->text().isEmpty()) {
		QMessageBox::information(this,"Erreur", "La Date de naissance ne peut pas re vide");
		return;
	}
	else {
		accept();
	}
	if (ui.lineEdit_5->text().isEmpty()) {
		QMessageBox::information(this,"Erreur", "L'adresse ne peut pas être vide");
		return;
	}
	else {
		accept();
	}
	if (ui.lineEdit_6->text().isEmpty()) {
		QMessageBox::information(this,"Erreur", "Le parti politique ne peut pas être vide");
		return;
	}
	else {
		accept();
	}
}
QString CandidatInscriptions::reqNom() const {
	return ui.lineEdit->text();
}

QString CandidatInscriptions::reqPrenom() const {
	return ui.lineEdit_2->text();
}

QString CandidatInscriptions::reqNas() const {
	return ui.lineEdit_3->text();
}

QString CandidatInscriptions::reqDateDeNaissance() const {
	return ui.lineEdit_4->text();
}

QString CandidatInscriptions::reqAdresse() const {
	return ui.lineEdit_5->text();
}

QString CandidatInscriptions::reqPartiPolitique() const {
	return ui.lineEdit_6->text();
}


