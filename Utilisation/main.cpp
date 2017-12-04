/*
 * file   : main.cpp
 * brief  : fichier utilisateur pour tester les methodes de la classe personne
 * author : Edwin Andrade Ospino
 * date   : 16-10-2017
 * version: 1.0
 */
#include <iostream>
#include"Candidat.h"
#include"Electeur.h"
#include"Circonscription.h"
#include"validationFormat.h"
#include"Date.h"
#include"Adresse.h"
#include<fstream>
#include"Personne.h"
#include<string>
#include<vector>
#include<stdexcept>
#include<fstream>

using namespace std;
using namespace util;
using namespace elections;

int main() {

int *choix1, choix1t;
choix1 = &choix1t;
int p_Parti;
long p_jour;
long p_mois;
long p_annee;
int p_NoDeLaRue;
string p_Rue;
string p_Ville;
string p_CodePostal;
string p_Province;
string p_nom;
string p_prenom;
string p_Nas;
char buffer[256];

std::vector<Personne*> m_vInscrits;


cout << "====================================================" << endl;
cout << "Bienvenue à l'outil de gestion de listes électorales" << endl;
cout << "====================================================" << endl << endl;
cout << "Votre choix" << endl;



	do
	{
		cout << "1. Inscription d'un candidat" << endl;
		cout << "2. Inscription d'un électeur" << endl;
		cout << "3. afficher de la circonscription" << endl;
		cout << "4. Quitter" << endl;
		cin >> choix1t;
	} while (!(choix1t >= 1 && choix1t <= 4));
	if (choix1t == 1) {
		cout << "choisissez un parti:" << endl;
		do
		{
			cout << "0-BLOC_QUEBECOIS,1-CONSERVATEUR,2-INDEPENDANT,3-LIBERAL,4-NOUVEAU_PARTI_DEMOCRATIQUE" << endl;
			cin >> p_Parti;

		} while (!(p_Parti >=0 && p_Parti <= 4));
	}

		cout << "Veuillez entrer sa date de naissance." << endl;
		cout << "Le jour [1..31]: ";
		cin >> p_jour;
		cout << "Le mois [1..12]: ";
		cin >> p_mois;
		cout << "L'annee [1970..2037]: ";
		cin >> p_annee;
		cout << "No. de rue :" << endl;
		cin >> p_NoDeLaRue;
		cin.ignore();
		cout << "Rue :" << endl;
		cin.getline(buffer,255);
		p_Rue = buffer;
		cout << "Ville :" <<endl;
		cin.getline(buffer,255);
		p_Ville = buffer;
		cout << "Code postal :" << endl;
		cin.getline(buffer,255);
		p_CodePostal = buffer;
		cout << "Province :" << endl;
		cin.getline(buffer,255);
		p_Province = buffer;
		cout << "Entrez le nom :" << endl;
		cin.getline(buffer,255);
		p_nom = buffer;
		cout << "Entrez le prenom :" << endl;
		cin.getline(buffer,255);
		p_prenom = buffer;
		cout << "Entrez le numero d'assurance sociale :" << endl;
		cin.getline(buffer,255);
		p_Nas = buffer;

		Candidat unCandidat(p_Nas, p_prenom, p_nom, util::Date(p_jour, p_mois, p_annee),
							util::Adresse(p_NoDeLaRue, p_Rue, p_Ville, p_CodePostal, p_Province), p_Parti);

		Circonscription UnCandidatCircons(p_nom, Candidat(p_Nas, p_prenom, p_nom, util::Date(p_jour, p_mois, p_annee),
							util::Adresse(p_NoDeLaRue, p_Rue, p_Ville, p_CodePostal, p_Province), p_Parti));

		m_vInscrits.push_back(&unCandidat);


		cout << "1. Inscription d'un candidat" << endl;
				cout << "2. Inscription d'un électeur" << endl;
				cout << "3. afficher de la circonscription" << endl;
				cout << "4. Quitter" << endl;
		cin >> choix1t;
		cout << "Veuillez entrer sa date de naissance." << endl;
				cout << "Le jour [1..31]: ";
				cin >> p_jour;
				cout << "Le mois [1..12]: ";
				cin >> p_mois;
				cout << "L'annee [1970..2037]: ";
				cin >> p_annee;
				cout << "No. de rue :" << endl;
				cin >> p_NoDeLaRue;
				cin.ignore();
				cout << "Rue :" << endl;
				cin.getline(buffer,255);
				p_Rue = buffer;
				cout << "Ville :" <<endl;
				cin.getline(buffer,255);
				p_Ville = buffer;
				cout << "Code postal :" << endl;
				cin.getline(buffer,255);
				p_CodePostal = buffer;
				cout << "Province :" << endl;
				cin.getline(buffer,255);
				p_Province = buffer;
				cout << "Entrez le nom :" << endl;
				cin.getline(buffer,255);
				p_nom = buffer;
				cout << "Entrez le prenom :" << endl;
				cin.getline(buffer,255);
				p_prenom = buffer;
				cout << "Entrez le numero d'assurance sociale :" << endl;
				cin.getline(buffer,255);
				p_Nas = buffer;
			Electeur unElecteur(p_Nas, p_prenom, p_nom, util::Date(p_jour, p_mois, p_annee),util::Adresse(p_NoDeLaRue,
										p_Rue, p_Ville, p_CodePostal, p_Province));
			m_vInscrits.push_back(&unElecteur);

			cout << "1. Inscription d'un candidat" << endl;
							cout << "2. Inscription d'un électeur" << endl;
							cout << "3. afficher de la circonscription" << endl;
							cout << "4. Quitter" << endl;
					cin >> choix1t;

					cout << UnCandidatCircons.reqCirconscriptionFormate();
					cout << (*m_vInscrits[0]).reqPersonneFormate();
					cout << (*m_vInscrits[1]).reqPersonneFormate();


					ofstream donneePersonnel("sauveur",ios::out);

					donneePersonnel << UnCandidatCircons.reqCirconscriptionFormate();
					donneePersonnel << (*m_vInscrits[0]).reqPersonneFormate();
					donneePersonnel << (*m_vInscrits[1]).reqPersonneFormate();

					donneePersonnel.close();


				cout << "1. Inscription d'un candidat" << endl;
				cout << "2. Inscription d'un électeur" << endl;
				cout << "3. afficher de la circonscription" << endl;
				cout << "4. Quitter" << endl;

				cin >> choix1t;
				cout << "fin du programme"	;




return 0;

}

