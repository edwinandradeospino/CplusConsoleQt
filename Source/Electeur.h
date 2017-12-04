/*
 * Electeur.h
 *
 *  Created on: 2017-11-18
 *      Author: etudiant
 */

#ifndef ELECTEUR_H_
#define ELECTEUR_H_
#include"Personne.h"

namespace elections {

class Electeur : public Personne {
public:
	Electeur(const std::string& p_nas,
			 const std::string& p_prenom,
			 const std::string& p_nom,
			 const util::Date& p_dateNaissance,
			 const util::Adresse& p_adresse);
	virtual ~Electeur() {};
	virtual std::string reqPersonneFormate() const;
	virtual elections::Personne* clone() const;
private:
};

}// fin du namespace

#endif /* ELECTEUR_H_ */
