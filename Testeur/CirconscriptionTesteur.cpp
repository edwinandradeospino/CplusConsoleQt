/*
 * CirconscriptionTesteur.cpp
 *
 *  Created on: 2017-11-26
 *      Author: etudiant
 */
#include"gtest/gtest.h"
#include<iostream>
#include"Circonscription.h"
#include"Candidat.h"
#include"Date.h"
#include"Adresse.h"
#include"Personne.h"


using namespace std;
using namespace util;
using namespace elections;

/**
 * \brief Test du constructeur Circonscription
 *		  Cas Valides: NAS valide.
 */
TEST(circonscription, ConstructeurAvecParametres){

	ASSERT_THROW(
			Circonscription UnCirconscription("ROIS",Candidat("046 454 286", "Timo","Chausirre", util::Date(2,2,1980),util::Adresse(235,"Roses","Qc", "g1g 3h3", "Qc"),2)),
				PreconditionException);
}


