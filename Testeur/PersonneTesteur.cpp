/*
 * PersonneTesteur.cpp
 *
 *  Created on: 2017-11-26
 *      Author: etudiant
 */
#include<iostream>
#include<gtest/gtest.h>
#include"Personne.h"
#include"Electeur.h"

using namespace elections;

/**
 * \class PersonneTest
 * \brief Fixture Personne pour la création d'un objet testPersonne pour les tests
 * \ des classes abstracts.
 */
class PersonneTest : public Personne {
public:
	PersonneTest(const std::string& p_nas,
			 const std::string& p_prenom,
			 const std::string& p_nom,
			 const util::Date& p_dateNaissance,
			 const util::Adresse& p_adresse)
	: Personne(p_nas, p_prenom, p_nom, p_dateNaissance,
			p_adresse) {};

	std::string reqPersonneFormate() const {
		return " ";
	}
	PersonneTest* clone() const {
		return new PersonneTest (*this);
	}
};

/**
 * \brief Test du constructeur Personne
 *		  Cas Valides de tous les reqs
 */
TEST(personne, ConstructeurAvecParametresValides) {
	PersonneTest UnePersonne("046 454 286", "Edwin", "Andrade",
			util::Date(2,2,1980), util::Adresse(235,"Rue","Qc","g3g 3h3","Qc"));
	ASSERT_EQ("046 454 286",UnePersonne.reqNas());
	ASSERT_EQ("Andrade",UnePersonne.reqPrenom());
	ASSERT_EQ("Edwin",UnePersonne.reqNom());
	ASSERT_EQ(util::Date(2,2,1980),UnePersonne.reqDateNaissance());
}


