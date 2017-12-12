#include "supprimerpersonne.h"

SupprimerPersonne::SupprimerPersonne(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(validerSuppression()));
}

SupprimerPersonne::~SupprimerPersonne()
{

}

QString SupprimerPersonne::reqNom() const {
	return ui.lineEdit->text();
}

QString SupprimerPersonne::reqPrenom() const {
	return ui.lineEdit_2->text();
}

void SupprimerPersonne::validerSuppression() {
	accept();
}
