/*
 * CandidatTesteur.cpp
 *
 *  Created on: 2017-11-25
 *      Author: etudiant
 */
#include<gtest/gtest.h>
#include"Candidat.h"
#include"Date.h"
#include"Adresse.h"
#include"Date.h"
#include"validationFormat.h"
#include"Personne.h"

using namespace util;
using namespace elections;

/**
 * \brief Test du constructeur Candidat
 * 		  Cas valides: Création d'un objet Candidat et vérification de tous les attributs
 */
TEST(candidat, ConstructeurAvecParamValides) {
	Candidat t_candidat("046 454 286","Timo","Chausirre", util::Date(2,2,1980),util::Adresse(235,"Roses","Qc", "g1g 3h3", "Qc"),2);
	ASSERT_EQ(2, t_candidat.reqPartiPolitique());
}

/**
 * \brief Test du constructeur Candidat
 *		  Cas invalides: parti politique non valide.
 */
TEST(candidat, ConstructeurAvecParamInvalides) {
	ASSERT_THROW(Candidat t_candidat("046 454 286","Timo","Chausirre", util::Date(2,2,1980),util::Adresse(235,"Roses","Qc", "g1g 3h3", "Qc"), 8.0), ContratException);
}

/**
 * \class Uncandidat
 * \brief Fixture  Uncandidat pour la création d'un objet testCandidat pour les tests
 */
class Uncandidat : testing::Test {
public:
	Uncandidat()
	: testCandidat("046 454 286","Timo","Chausirre", util::Date(2,2,1980),util::Adresse(235,"Roses","Qc", "g1g 3h3", "Qc"), 3)
	{ }
	Candidat testCandidat;
};


