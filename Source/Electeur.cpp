/*
 * Electeur.cpp
 *
 *  Created on: 2017-11-18
 *      Author: etudiant
 */
#include"Electeur.h"
#include<sstream>
#include<iostream>

using namespace std;
namespace elections {

/**
 * \brief classe derivée de la classe de base Personne. constructeur avec paramètres
 * 		  On construit un objet Electeurs à partir de valeurs passées en paramètres.
 * \param[in] p_nas est une chaîne string qui représente le Numéro d'assurance sociale.
 * \param[in] p_prenom est une chaîne string qui représente le prenom de la personne
 * \param[in] p_nom est une chaîne string qui représente le nom de la personne
 * \param[in] p_dateNaissance est une date de type Date qui représente la date de naissance de la personne
 * \param[in] p_adresse est une chaîne string qui représente l'adresse de la personne
 * \ p_prenom et p_nom ne doivent pas être vides.
 *
 *precondition: NAS invalide, prenom et nom  non vides,
 *poscondition: verifie si les paramètres son valides
 *invariants: verifie le retour de données valides
 *
 *
 */
Electeur::Electeur(const std::string& p_nas,
			 	 const std::string& p_prenom,
				 const std::string& p_nom,
				 const util::Date& p_dateNaissance,
				 const util::Adresse& p_adresse)
: Personne(p_nas, p_prenom, p_nom, p_dateNaissance, p_adresse)
{

}

/**
 * \brief retourne une date formatée dans une chaîne de caracères (string)
 * \return la date formatée dans une chaîne de caractères
 */
std::string Electeur::reqPersonneFormate() const{

	ostringstream os;
		os << "Electeurs" << endl;
		os << "====================="<< endl;
		os << "NAS :             \t" << reqNas() << std::endl;
		os << "Prenom :          \t" << reqPrenom() << std::endl;
		os << "Nom :             \t" << reqNom() << std::endl;
		os << "Date de Naissance:\t" << reqDateNaissance().reqDateFormatee() << std::endl;
		os << "Adresse           \t" << reqAdresse() << std::endl;


	return os.str();
}


/**
 * \brief retourne l'object courrant cloné au lick de la mémoire.
 * \
 */
Personne* Electeur::clone() const {
	return new Electeur (*this);
}




} // fin du namespace


