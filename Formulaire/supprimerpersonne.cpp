#include "supprimerpersonne.h"

SupprimerPersonne::SupprimerPersonne(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(validerSuppression()));
}
/**
* \ brief
* \
*/
SupprimerPersonne::~SupprimerPersonne()
{

}
/**
* \ brief
* \
*/
QString SupprimerPersonne::reqNom() const {
	return ui.lineEdit->text();
}
/**
* \ brief
* \
*/
QString SupprimerPersonne::reqPrenom() const {
	return ui.lineEdit_2->text();
}
/**
* \ brief
* \
*/
void SupprimerPersonne::validerSuppression() {
	accept();
}
