/*
 * AdresseTesteur.cpp
 *
 *  Created on: 2017-11-26
 *      Author: etudiant
 */
#include<gtest/gtest.h>
#include"Adresse.h"
#include<iostream>

using namespace util;


/**
 * \brief Test du constructeur Adresse
 *		  Cas Valides: tous les reqs testées
 */
TEST(adresse, ConstructeurValides){
	Adresse adresseTest(135,"Roses","QC","g3g 3h3", "Qc");
	ASSERT_EQ(135, adresseTest.reqNumeroDeLaRue());
	ASSERT_EQ("Roses", adresseTest.reqNomDeLaRue());
	ASSERT_EQ("Qc", adresseTest.reqVille());
	ASSERT_EQ("Quebec", adresseTest.reqProvince());
	ASSERT_EQ("g3g 3h3", adresseTest.reqCodePostal());

}

/**
 * \brief Test du constructeur Adresse
 *		  Cas Non Valides: tous les reqs testées
 */
TEST(adresse, ConstructeurNonValides){
	Adresse adresseTest(135,"Roses","QC","g3g 3h3", "Qc");
	ASSERT_EQ(135, adresseTest.reqNumeroDeLaRue());
	ASSERT_EQ("", adresseTest.reqNomDeLaRue());
	ASSERT_EQ("", adresseTest.reqVille());
	ASSERT_EQ("", adresseTest.reqProvince());
	ASSERT_EQ("", adresseTest.reqCodePostal());

}
