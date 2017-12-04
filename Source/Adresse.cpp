/*
 * Adresse.cpp
 ** \brief Implantation de la classe Adresse
 *        balises Doxygen

 *  Created on: 2017-11-20
 *      Author: Edwin Andrade Ospino
 */
#include"Adresse.h"
#include<iostream>
#include<sstream>
#include"ContratException.h"

using namespace std;
namespace util {

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
Adresse::Adresse(const int& p_numeroDeLaRue,
		const std::string& p_nomDeLaRue,
		const std::string& p_ville,
		const std::string& p_codePostal,
		const std::string& p_province)
: m_numeroDeLaRue(p_numeroDeLaRue),m_nomDeLaRue(p_nomDeLaRue),m_ville(p_ville),
  m_codePostal(p_codePostal),m_province(p_province)
{
	PRECONDITION(p_numeroDeLaRue >= 0);
	PRECONDITION(!p_nomDeLaRue.empty());
	PRECONDITION(!p_ville.empty());
	PRECONDITION(!p_codePostal.empty());
	PRECONDITION(!p_province.empty());

	POSTCONDITION(m_numeroDeLaRue == p_numeroDeLaRue);
	POSTCONDITION(m_nomDeLaRue == p_nomDeLaRue);
	POSTCONDITION(m_ville == p_ville);
	POSTCONDITION(m_codePostal == p_codePostal);
	POSTCONDITION(m_province == p_province);

	INVARIANTS();

}

/**
 * \brief retourne le numero civique.
 * \return un entier  qui représente le numero civique.
 */
int Adresse::reqNumeroDeLaRue() const {
	return m_numeroDeLaRue;
}

/**
 * \brief retourne le nom de la rue
 * \return une chaîne de caracères (string) qui représente le nom de la rue.
 */
std::string Adresse::reqNomDeLaRue() const {
	return m_nomDeLaRue;
}

/**
 * \brief retourne le nom de la ville.
 * \return une chaîne de caracères (string) qui représente le nom de la ville.
 */
std::string Adresse::reqVille() const {
	return m_ville;
}

/**
 * \brief retourne le code postal
 * \return une chaîne de caracères (string) qui représente le code postal.
 */
std::string Adresse::reqCodePostal() const {
	return m_codePostal;
}

/**
 * \brief retourne le nom de la Province.
 * \return une chaîne de caracères (string) qui représente le nom de la province.
 */
std::string Adresse::reqProvince() const {
	return m_province;
}

/**
 * \brief Assigne une nouvelle adresse à l'objet courrant
*/
void Adresse::asgNouvelleAdresse(util::Adresse& p_nouvelleAdresse) {
	p_nouvelleAdresse = (*this);
}

/**
 * \brief surcharge de l'opérateur ==
 * \param[in] p_date à comparer à la date courante
 * \return un booléen indiquant si les deux dates sont égales ou non
 */
bool Adresse::operator ==(const Adresse& p_outreAdresse){

	return (m_numeroDeLaRue == p_outreAdresse.reqNumeroDeLaRue() &&
			m_nomDeLaRue == p_outreAdresse.reqNomDeLaRue() &&
			m_ville == p_outreAdresse.reqVille() &&
			m_codePostal == p_outreAdresse.reqCodePostal() &&
			m_province == p_outreAdresse.reqProvince());
}

/**
 * \brief retourne une date formatée dans une chaîne de caracères (string)
 * \return lformatée dans une chaîne de caractères
 */
std::string Adresse::reqChaineFormatee() const{
	ostringstream os;
	os << m_numeroDeLaRue << " , " << m_nomDeLaRue << " , "
	   << m_ville << " , " << m_codePostal << " , " << m_province;
	return os.str();
}

/**
 * \brief surcharge de l'opérateur ==
 * \param[in] p_adresse à comparer à l'adresse courante
 * \return un booléen indiquant si les deux adresses sont égaux ou non.
 */
std::ostream& operator<<(std::ostream& p_os, const Adresse& p_adresse) {
	p_os << p_adresse.m_numeroDeLaRue;
	p_os << p_adresse.m_nomDeLaRue;
	p_os << p_adresse.m_ville;
	p_os << p_adresse.m_codePostal;
	p_os << p_adresse.m_province;

	return p_os;
}

void Adresse::verifieInvariant() const {
	INVARIANT(m_numeroDeLaRue > 0);
}



}// fin du namespace



