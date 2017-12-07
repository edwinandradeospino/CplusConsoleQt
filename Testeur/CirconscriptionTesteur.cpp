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
#include "Electeur.h"
#include"Date.h"
#include"Adresse.h"
#include"Personne.h"
#include "PersonneException.h"

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

/**
 * \brief Création d'une fixture utilisé pour les tests de la classe Circonscription
 */

class CirconscriptionValide: public ::testing::Test
{

public:
	CirconscriptionValide():
		t_candidat("123 456 899","James","Bond",Date(1,1,1980),Adresse(123, "de l'Orme","Quebec","G0N 1L0","QC"),1),
		t_circonscription("Circonscription no1",t_candidat),
		t_electeur_1("123 456 899","Alexandre","LeGrand",Date(1,1,1980),Adresse(123,"des Bouleaux","Victoriaville","G0N 1K0","QC")),
	    t_electeur_2("046 454 286","Jules","Cesar",Date(1,1,1986),Adresse(123, "des Erables","Saint-Hyacinthe","G0N 1M0","QC")),
		t_electeur_3("640 454 286","Teddy","Rosevelt",Date(10,10,1977),Adresse(123, "des Peupliers","Montreal","G0N 1X0","QC"))
	{
	}
	Candidat t_candidat;
	Circonscription t_circonscription;
	Electeur t_electeur_1,t_electeur_2,t_electeur_3;

};
/**
 * \brief Test de la méthode reqNom()
 *        Cas valides: reqNom vérifier le retour du nom de la circonscription.
 *        Cas invalides: aucun.
 */

TEST_F(CirconscriptionValide,reqNom)
{
	ASSERT_EQ("Circonscription no1",t_circonscription.reqNom());

}
/**.
 * \brief Test de la méthode reqDeputeElu()
 *        Cas valides: reqDeputeElu vérifier le candidat retourne
 *        Cas invalides: aucun.
 */

TEST_F(CirconscriptionValide,reqDeputeElu)
{
	ASSERT_EQ(true,t_candidat==t_circonscription.reqDeputeElu());

}

/**
 * \brief Test de la méthode estDejaPresente()
 *        Cas valides: tester le retour de la fonction
 *        Cas invalides: aucun.
 */
/*TEST_F(CirconscriptionValide,personneEstDejaPresente)
{

	t_circonscription.inscrire(t_electeur_1);
	t_circonscription.inscrire(t_electeur_2);
	t_circonscription.inscrire(t_electeur_3);
	ASSERT_EQ(true,t_circonscription.personneEstDejaPresente(t_electeur_1.reqNas()));
	ASSERT_EQ(false,t_circonscription.personneEstDejaPresente("046 454 385"));

}*/
/**
 * \brief Test de la méthode estDejaPresente()
 *        Cas valides: tester le retour de la fonction
 *        Cas invalides: aucun.
 */
TEST_F(CirconscriptionValide,inscrirePersonneDejaPresente)
{

	t_circonscription.inscrire(t_electeur_1);
	t_circonscription.inscrire(t_electeur_2);
	t_circonscription.inscrire(t_electeur_3);
	//ASSERT_EQ(true,t_circonscription.personneEstDejaPresente(t_electeur_1.reqNas()));
	//ASSERT_EQ(false,t_circonscription.personneEstDejaPresente("046 454 385"));
	ASSERT_THROW( t_circonscription.inscrire(t_electeur_1),PersonneDejaPresentException)
		      << "La personne est deja inscrite";
}

/**
 * \brief Test de la méthode desinscrire()
 *        Cas valides: tester le retour de la fonction
 *        Cas invalides: aucun.
 */
TEST_F(CirconscriptionValide,desinscrire)
{
	t_circonscription.inscrire(t_electeur_1);
	t_circonscription.inscrire(t_electeur_2);
	t_circonscription.inscrire(t_electeur_3);
	t_circonscription.desinscrire(t_electeur_1.reqNas());
	ASSERT_EQ(false,t_circonscription.personneEstDejaPresente(t_electeur_1.reqNas()));

}

TEST_F(CirconscriptionValide,desinscrireNasAbsent)
{


}


TEST_F(CirconscriptionValide,reqCirconscriptionFormate)
{
	std::ostringstream os_1;
	os_1<<t_circonscription.reqCirconscriptionFormate();

	std::ostringstream os_2;
	os_2<<"circonscription : "<<t_circonscription.reqNom()<<endl;
	os_2<<"Depute Sortant : "<<endl;
	os_2<<t_candidat.reqPersonneFormate()<<endl;
	os_2<<"Liste des inscrits :"<<endl;

	ASSERT_EQ(os_1.str(),os_2.str());
}
/**
 * \brief Test de la méthode inscrire()
 *        Cas valides: valider que les electeurs on ete inscrit a la liste
 *        Cas invalides: aucun.
 */


