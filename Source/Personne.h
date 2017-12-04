/*
 * file   : Personne.h
 * brief  : prototype de la classe Personne
 * author : Edwin Andrade Ospino
 * date   : 16-10-2017
 * version: 1.0
 */

#ifndef PERSONNE_H_
#define PERSONNE_H_
#include"Date.h"
#include"Adresse.h"

namespace elections {

/**
 * \class Personne
 * \brief Cette classe sert à la manipulation des object personnes.
 *
 *        Elle valide l'information personnel.
 *        La classe accepte de données valides passés en paramétre par
 *        un constructeur.
 *  	  Attributs du constructeur:
 *  	       string p_nas: Numéro d'assurance social
 *  		   string p_prenom : prénom de la personne
 *  		   string p_nom : nom de la personne
 *  		   Date p_dateNaissance : date de naissance de la personne
 *  		   string p_adresse : adresse de la personne.
 */

class Personne {
public:
	Personne(const std::string& p_nas,
			 const std::string& p_prenom,
			 const std::string& p_nom,
			 const util::Date& p_dateNaissance,
			 const util::Adresse& p_adresse);
	virtual ~Personne() {};
	std::string reqNas() const;
	void asgNas(const std::string& p_nas);
	std::string reqPrenom() const;
	void asgPrenom(const std::string& p_prenom);
	std::string reqNom() const;
	void asgNom(const std::string& p_nom);
	util::Date reqDateNaissance() const;
	void asgDateNaissance(const util::Date& p_dateNaissance);
	util::Adresse reqAdresse() const;
	void asgAdresse(const util::Adresse& p_adresse);
	virtual std::string reqPersonneFormate() const = 0;
	virtual Personne* clone() const = 0;

	bool operator==(const Personne& p_personne)const;
	friend std::ostream& operator<<(std::ostream& p_os, const Personne& p_personne);

protected:
	void verifieInvariants() const;
	std::string m_nas;
	std::string m_prenom;
	std::string m_nom;
	util::Date m_dateNaissance;
	util::Adresse m_adresse;

};

} // fin du namespace elections

#endif /* PERSONNE_H_ */
