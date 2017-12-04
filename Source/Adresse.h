/*
 * Adresse.h
 *
 *  Created on: 2017-11-10
 *      Author: etudiant
 */

#ifndef ADRESSE_H_
#define ADRESSE_H_
#include<iostream>
#include"ContratException.h"

namespace util {

class Adresse {
public:
	Adresse(const int& p_numeroDeLaRue,
			const std::string& p_nomDeLaRue,
			const std::string& p_ville,
			const std::string& p_codePostal,
			const std::string& p_province);
	int reqNumeroDeLaRue() const;
	std::string reqNomDeLaRue() const;
	std::string reqVille() const;
	std::string reqCodePostal() const;
	std::string reqProvince() const;

	void asgNouvelleAdresse(util::Adresse& p_nouvelleAdresse);
	bool operator ==(const Adresse& p_outreAdresse);
	std::string reqChaineFormatee() const;
	friend std::ostream& operator<<(std::ostream& p_os, const Adresse& p_adresse);

private:

	void verifieInvariant() const;

	int m_numeroDeLaRue;
	std::string m_nomDeLaRue;
	std::string m_ville;
	std::string m_codePostal;
	std::string m_province;

};

} // fin du namespace

#endif /* ADRESSE_H_ */
