/*
 * Circonscription.cpp
 *
 *  Created on: 2017-11-20
 *      Author: etudiant
 */
#include"Circonscription.h"
#include<iostream>
#include<sstream>
#include"Candidat.h"
#include"Adresse.h"
#include "PersonneException.h"
#include <string>

using namespace std;

namespace elections {

/**
 * \brief constructeur avec paramètres
 * 		  On construit un objet Date à partir de valeurs passées en paramètres.
 * 		  Les attributs sont assignés seulement si la date est considérée comme valide.
 * 		  Autrement, une erreur d'assertion est générée.
 * \param[in] p_jour est un entier long qui représente le jour de la date
 * \param[in] p_mois est un entier long qui représente le mois de la date
 * \param[in] p_annee est un entier long qui représente l'année de la date
 * \pre p_jour, p_mois, p_annee doivent correspondre à une date valide
 * \post l'objet construit a été initialisé à partir des entiers passés en paramètres
 */
Circonscription::Circonscription(const std::string& p_nom, const Candidat& p_depute)
: m_nom(p_nom), m_deputeElu(p_depute)
{
	PRECONDITION(!p_nom.empty());

}

/**
* brief Destructeur des objets crées dans le vector
 * pour mantenir le space de mémoire
 *
 */
Circonscription::~Circonscription() {

	std::vector<elections::Personne *>::const_iterator it;
	for(it=m_vInscrits.begin();it<m_vInscrits.end();it++)
	{
	    delete (*it);
	}
	m_vInscrits.clear();
}
/**
 * \brief retourne le jour de la date
 * \return un entier long qui représente le jour de la date
 */
const std::string Circonscription::reqNom() const {
	return m_nom;
}

/**
 * \brief retourne le jour de la date
 * \return un entier long qui représente le jour de la date
 */
Candidat Circonscription::reqDeputeElu() const{
	return m_deputeElu;

}

/**
 * \brief retourne une date formatée dans une chaîne de caracères (string)
 * \return la date formatée dans une chaîne de caractères
 */
std::string Circonscription::reqCirconscriptionFormate() const {
	ostringstream p_os;

	p_os << "Circonscription  :" << reqNom();
	p_os << "Depute Sortant   : "<< reqDeputeElu();

	p_os << "Candidat" << endl;
	p_os << "====================="<< endl;

	p_os << "NAS :             \t" << m_deputeElu.reqNas() << std::endl;
	p_os << "Prenom :          \t" << m_deputeElu.reqPrenom() << std::endl;
	p_os << "Nom :             \t" << m_deputeElu.reqNom() << std::endl;
	p_os << "Date de Naissance:\t" << m_deputeElu.reqDateNaissance().reqDateFormatee() << std::endl;
	p_os << "Adresse           \t" << m_deputeElu.reqAdresse()<< std::endl;
	p_os << " Parti politique  \t" << m_deputeElu.reqPartiPolitique() << std::endl << endl;

	p_os << "Liste d'inscrits:" << endl << endl ;

	for (size_t i = 0; i < m_vInscrits.size(); i++){
		p_os << (*m_vInscrits[i]).reqPersonneFormate() << endl;
	}
	return p_os.str();
}
/**
 * brief fait l'inscription d'un candidat qui est à la fois diputé.
 * par: objet personne.
 *
 */

void Circonscription::inscrire(const Personne& p_nouvelInscrit) {
	//Verifier si l'employe est present
	try{
		if(personneEstDejaPresente(p_nouvelInscrit.reqNas()))
		{
		    throw PersonneDejaPresentException(p_nouvelInscrit.reqPersonneFormate());
		}
		m_vInscrits.push_back(p_nouvelInscrit.clone());
	}
	catch(elections::PersonneDejaPresentException& e) {}
}

void Circonscription::desinscrire(const std::string& p_nas)
{
	try{
		if(!personneEstDejaPresente(p_nas))
		{
			throw PersonneAbsenteException(p_nas+" n'est pas dans la liste");
		}

		std::vector<elections::Personne *>::const_iterator it;
		for(it=m_vInscrits.begin();it<m_vInscrits.end();it++)
		{
		    if((*it)->reqNas()==p_nas)
		    {
		    	delete (*it);
				m_vInscrits.erase(it);
		    }
		}
	}
	catch(elections::PersonneAbsenteException& e){}
}

bool Circonscription::personneEstDejaPresente(const std::string& p_nas)const
{
	bool personnePresent=false;
	std::vector<elections::Personne *>::const_iterator it;
	for(it=m_vInscrits.begin();it<m_vInscrits.end();it++)
	{
	    if((*it)->reqNas()==p_nas)
	    {
	    	personnePresent=true;
	    }
	}
	return personnePresent;
}

} // fin du namespace



