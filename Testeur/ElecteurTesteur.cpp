/*
 * ElecteurTesteur.cpp
 *
 *  Created on: 2017-11-26
 *      Author: etudiant
 */
#include<gtest/gtest.h>
#include<iostream>
#include"Electeur.h"

using namespace util;
using namespace std;
using namespace elections;

/**
 * \class UnElecteur
 * \brief Fixture  Electeur pour la création d'un objet testElecteur pour les tests
 */
class UnElecteur : testing::Test {
public:
	UnElecteur()
	:electeurTest("046 454 286","Jack", "Chan",Date(2,2,1980), Adresse(235,"Roses","Qc", "g1g 3h3", "Qc" ))
	{

	}
	Electeur electeurTest;
};



/**
 * \brief Test du constructeur Electeur
 *		  Cas Valides: NAS valide.
 */
TEST(electeur1, constructeurElecteur) {
	Electeur UnElecteur("046 454 286","Jack", "Chan",Date(2,2,1980), Adresse(235,"Roses","Qc", "g1g 3h3", "Qc" ));
	ASSERT_EQ("046 454 286", UnElecteur.reqNas());
}

/**
 * \brief Test du constructeur Electeur Invalide.
 *		  Cas Non Valides: NAS non valide.
 */
TEST(electeur, ConstructeurAvecParametresInvalides) {
	Electeur UnElecteur("046 454 286","Jack", "Chan",Date(2,2,1980), Adresse(235,"Roses","Qc", "g1g 3h3", "Qc" ));
	ASSERT_EQ("123 458 789", UnElecteur.reqNas());
}

