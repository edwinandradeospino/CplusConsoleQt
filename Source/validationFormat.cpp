/*
 * validationFormat.cpp
 *
 *  Created on: 2017-09-11
 *      Author: Edwin Andrade Ospino
 */

#include<iostream>
#include"validationFormat.h"
#include<ctype.h>
#include<stdlib.h>
#include<string>


namespace util {

using namespace std;

/*
 * type de retour: booleenne.
 * parametres d'entrée:[p_nas]:string qui contient le numéro d'assurance social
 * Breaf: fonction qui valide le format du numéro d'assurance social.
 *
 */
bool validerNas(const std::string& p_nas){

	/* boucle pour entreprendre la somme et produit des digits
	* faire la verification de digit
	*/
	int sommeTotal = 0,refuse = 0, nb_space = 0, *pta , *ptb, *ptc;
	pta = &sommeTotal;
	ptb = &refuse;
	ptc = &nb_space;


	for (int i = 0; i < p_nas.size() ; i++){

		if (isdigit(p_nas[i]) || isspace(p_nas[i]))
		{
			if (isspace(p_nas[i]))
			{
				nb_space += 1;
			}
			else
			{
				int pos_chaine = i - nb_space;
				sommeTotal += foncSommeDigit(p_nas[i],pos_chaine);
			}
		}
		else
		{
			if (!isspace(p_nas[i]))
			{
				refuse += 1;
			}
		}
	}

	// la variable refuse verifie que tous les caractères soient digits.
	if (refuse > 0)
	{
		return false;
	}
	else
	{

		// la somme total de digits et digits composes doit être égale à zéro.
		if (sommeTotal % 10  == 0 )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}

/*
 * arguments d'entrée: [char]:digit, [int]:compteur du bucle
 * breaf: fonction qui prend chaque digit et fait la muliplication pour la serie de validation
 *
 */
int foncSommeDigit(const char& digSousChaine, const int& j){

	int chaineValidateur[11] = {1,2,1,2,1,2,1,2,1};
	int sommeDigit = (int)(digSousChaine - 48) * (chaineValidateur[j]);
	int sommeDigitFinal = sommeDigit/10 + (sommeDigit -(sommeDigit/10)*10);

return sommeDigitFinal;
}

bool valideDateDeNaissance(const util::Date& p_dateNaissance){
	long p_jourin = p_dateNaissance.reqJour();
	long p_moisin = p_dateNaissance.reqMois();
	long p_anneein = p_dateNaissance.reqAnnee();

	if (Date::validerDate(p_jourin, p_moisin, p_anneein))
	{
		return true;
	}
	else
	{
		return false;
	}
}


} //fin du namespace
