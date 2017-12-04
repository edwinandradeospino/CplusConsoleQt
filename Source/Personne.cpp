/*
 * file   : Personne.cpp
 * brief  : implantation de la classe Personne
 * author : Edwin Andrade Ospino
 * date   : 16-10-2017
 * version: 1.0
 */
#include"Personne.h"
#include<iostream>
#include<string>
#include<sstream>
#include"validationFormat.h"
#include"ContratException.h"

namespace elections {
using namespace std;

/**
 * \brief constructeur avec paramètres
 * 		  On construit un objet Personne à partir de valeurs passées en paramètres.
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
Personne::Personne(const std::string& p_nas,
		const std::string& p_prenom,
		const std::string& p_nom,
		const util::Date& p_dateNaissance,
		const util::Adresse& p_adresse)
:m_nas(p_nas), m_prenom(p_prenom), m_nom(p_nom),
 m_dateNaissance(p_dateNaissance), m_adresse(p_adresse)
{
	PRECONDITION(util::validerNas(p_nas));
	PRECONDITION(!p_prenom.empty());
	PRECONDITION(!p_nom.empty());
	PRECONDITION(util::valideDateDeNaissance(p_dateNaissance));
	POSTCONDITION(m_nas == p_nas);
	POSTCONDITION(m_prenom == p_prenom);
	POSTCONDITION(m_nom == p_nom);
	POSTCONDITION(m_dateNaissance == p_dateNaissance);
	void asgAdresse();
	void asgNas();
	void asgPrenom();
	void asgNom();
	void asgDateNaissance();

}

/**
 * \brief retourne le numéro d'assurance sociale de la personne
 * \return une chaîne de caractère string qui représente le numéro d'assurance sociale de la personne
 */
std::string Personne::reqNas() const {
	return m_nas;
}

/**
 * \brief Assigne le numéero d'assurance sociale à l'objet Personne crée.
 * \param[in] p_nas est une chaîne string qui représente le numéro d'assurance sociale de la personne crée
 * \p_nas dois correspondre à une chaîne valide
 */
void Personne::asgNas(const std::string& p_nas){
	PRECONDITION(util::validerNas(p_nas));
	m_nas = p_nas;
	POSTCONDITION(m_nas == p_nas);
}

/**
 * \brief retourne le nom de la personne
 * \return une chaîne de caractère string qui représente le nom de la personne
 */
std::string Personne::reqNom() const {
	return m_nom;
}

/**
 * \brief Assigne le nom à l'objet Personne crée.
 * \param[in] p_nas est une chaîne string qui représente le nom de la personne crée
 * \p_nom ne doit pas être vide.
 */
void Personne::asgNom(const std::string& p_nom){
	PRECONDITION(!p_nom.empty());
	m_nom = p_nom;
	POSTCONDITION(m_nom == p_nom);
}

/**
 * \brief retourne le prenom de la personne crée.
 * \return une chaîne de caractère string qui représente le prenom de la personne
 */
std::string Personne::reqPrenom() const {
	return m_prenom;
}

/**
 * \brief Assigne le prenom à l'objet Personne crée.
 * \param[in] p_prenom est une chaîne string qui représente le prenom de la personne crée
 * \p_prenom ne doit pas être vide.
 */
void Personne::asgPrenom(const std::string& p_prenom) {
	PRECONDITION(!p_prenom.empty());
	m_prenom = p_prenom;
	POSTCONDITION(!p_prenom.empty());
}

/**
 * \brief retourne la date de naissance de la personne crée.
 * \retourne une date qui représente la date de naissance de la personne crée
 */
util::Date Personne::reqDateNaissance() const{
	return m_dateNaissance;
}

/**
 * \brief Assigne une date de naissance à l'objet Personne crée.
 * \param[in] p_jour est un entier long qui représente le jour de la date de naissance
 * \param[in] p_mois est un entier long qui représente le mois de la date de naissance
 * \param[in] p_annee est un entier long qui représente l'année de la date de naissance
 */
void Personne::asgDateNaissance(const util::Date& p_dateNaissance) {
	PRECONDITION(util::valideDateDeNaissance(p_dateNaissance));
	m_dateNaissance = p_dateNaissance;
	POSTCONDITION(m_dateNaissance == p_dateNaissance);
}

/**
 * \brief retourne l'adresse de la personne crée.
 * \retourne l'adresse qui représente l'adresse de la personne crée
 */
util::Adresse Personne::reqAdresse() const {
	return m_adresse;
}

/**
 * \brief Assigne une adresse à l'objet Personne crée.
 * \param[in] p_adresse est une chaîne string qui représente l'adresse de la Personne crée.
 * \p_adresse ne doit pas être vide.
 */
void Personne::asgAdresse(const util::Adresse& p_adresse) {
		m_adresse = p_adresse;
}

/**
 * \brief surcharge de l'opérateur ==
 * \param[in] p_personne à comparer à la personne courante
 * \return un booléen indiquant si les deux personne sont égales ou non
 */
bool Personne::operator == (const Personne& p_personne) const{
	return (m_nas == p_personne.reqNas() &&
			m_prenom == p_personne.reqPrenom() &&
			m_nom == p_personne.reqNom() &&
			m_dateNaissance == p_personne.reqDateNaissance());
}

/**
 * \relates Date
 * \brief surcharge de la fonction << d'écriture dans un flux de sortie
 * \param[in] p_os un flux de sortie  dans laquelle on va écrire
 * \param[in] p_personne sortie dans le flux
 * \return le flux dans lequel on a écrit la date, ceci pour les appels en cascade
 */
std::ostream& operator <<(std::ostream& p_os, const Personne& p_personne){
	p_os << p_personne.reqNas() << endl <<
			p_personne.reqPrenom() << endl <<
			p_personne.reqNom() << endl <<
			p_personne.reqDateNaissance().reqJour() << " " <<
			p_personne.reqDateNaissance().reqMois() << " " <<
			p_personne.reqDateNaissance().reqAnnee() << " " << endl <<
			p_personne.m_adresse.reqChaineFormatee();
	return p_os;
}

void Personne::verifieInvariants() const {
	INVARIANT(!m_prenom.empty());
	INVARIANT(!m_nom.empty());
	INVARIANT(!m_nas.empty());
	INVARIANT(m_dateNaissance.reqAnnee() >= 1970 && m_dateNaissance.reqAnnee() <= 2037);
}

} // fin du namespace elections



