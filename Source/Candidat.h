/*
 * Candidat.h
 *
 *  Created on: 2017-11-16
 *      Author: etudiant
 */

#ifndef CANDIDAT_H_
#define CANDIDAT_H_
#include"Personne.h"
#include"ContratException.h"


namespace elections {

class Candidat : public Personne {
public:
	Candidat(const std::string& p_nas,
		const std::string& p_prenom,
		const std::string& p_nom,
		const util::Date& p_dateNaissance,
		const util::Adresse& p_adresse,
		int p_parti);
	~Candidat() {};
	int reqPartiPolitique() const;

	std::string partiPolitiqueString() const;
	virtual std::string reqPersonneFormate() const;
	virtual elections::Personne* clone() const;

private:
	int m_partiPolitique;
	void verifieInvariants() const;
};

}//namespace


#endif /* CANDIDAT_H_ */
