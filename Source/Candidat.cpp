/*
 * Candidat.cpp
 *
 *  Created on: 2017-11-16
 *      Author: etudiant
 */
#include<iostream>
#include"Candidat.h"
#include<sstream>
#include"ContratException.h"

using namespace std;
namespace elections {

enum partisPolitique {BLOC_QUEBECOIS,CONSERVATEUR,INDEPENDANT,LIBERAL,
						NOUVEAU_PARTI_DEMOCRATIQUE};

/**
 * \brief class derivée de la classe Personne. constructeur avec paramètres
 * 		  On construit un objet Candidat à partir de valeurs passées en paramètres.
 * \param[in] p_nas est une chaîne string qui représente le Numéro d'assurance sociale.
 * \param[in] p_prenom est une chaîne string qui représente le prenom de la personne
 * \param[in] p_nom est une chaîne string qui représente le nom de la personne
 * \param[in] p_dateNaissance est une date de type Date qui représente la date de naissance de la personne
 * \param[in] p_adresse est une chaîne string qui représente l'adresse de la personne
 * \param[in] p_parti est une entier  qui représente le parti politique du candidat.
 * \ p_prenom et p_nom ne doivent pas être vides.
 *
 *precondition: NAS invalide, prenom et nom non vides,
 *poscondition: verifie si les paramètres son valides
 *invariants: verifie le retour de données valides
 *
 *
 */
 Candidat::Candidat(const std::string& p_nas,
		const std::string& p_prenom,
		const std::string& p_nom,
		const util::Date& p_dateNaissance,
		const util::Adresse& p_adresse,
		int p_parti)
 : Personne(p_nas, p_prenom, p_nom, p_dateNaissance, p_adresse),
   	   	   m_partiPolitique(p_parti)
{
	 PRECONDITION(p_parti >= 0 && p_parti <= 4 );
	 POSTCONDITION(m_partiPolitique == p_parti);

}

 /**
 	 * \ brief retourne l'information d'une personne formatée dans une chaîne de caracères (string)
 	 * \ composé de 6 paramètres: le numéro d'assurance sociale, prenom, nom,
 	 * \ date de naissance, adresse et parti politique.
 	 * \ retourne tout formatée dans une chaîne de caractères
 	 */
std::string Candidat::reqPersonneFormate() const {

	ostringstream os;

		os << "Candidat" << endl;
		os << "====================="<< endl;

		os << "NAS :             \t" << reqNas() << std::endl;
		os << "Prenom :          \t" << reqPrenom() << std::endl;
		os << "Nom :             \t" << reqNom() << std::endl;
		os << "Date de Naissance:\t" << reqDateNaissance().reqDateFormatee() << std::endl;
		os << "Adresse           \t" << reqAdresse() << std::endl;
		os << " Parti politique  \t" << reqPartiPolitique() << std::endl;

	return os.str();
}


/**
 * \brief retourne le parti politique du candidat
 * \return un entier qui représente le partis politique du candidat.
 */
int Candidat::reqPartiPolitique() const{
	return m_partiPolitique;
}

/**
 * \brief retourne une chaine de caractère avec le partis politique du candidat.
 * \retourne le parti politique formatée dans une chaîne de caractères
 */
std::string Candidat::partiPolitiqueString() const {
	string p_partiPol = "";
	switch (reqPartiPolitique()){
	case 0:
		p_partiPol = partisPolitique(0);
		break;
	case 1:
		p_partiPol = partisPolitique(1);
		break;
	case 2:
		p_partiPol = partisPolitique(2);
		break;
	case 3:
		p_partiPol = partisPolitique(3);
		break;
	case 4:
		p_partiPol = partisPolitique(4);
		break;
	default:
		break;
	}
	return p_partiPol;
}


void Candidat::verifieInvariants() const {
	INVARIANT(!m_prenom.empty());
}
/**
 * \brief retourne l'object courrant cloné vers le lick de la mémoire.
 * \
 */
Personne* Candidat::clone() const {
	return new Candidat (*this);
}

} //  fin du namespace elections



