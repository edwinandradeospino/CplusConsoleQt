#include "formulaire.h"

Formulaire::Formulaire(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(close()));
	QObject::connect(ui.actionQuitter ,SIGNAL(triggered()), this, SLOT(close()));
}

Formulaire::~Formulaire()
{

}
