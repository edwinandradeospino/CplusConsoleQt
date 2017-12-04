/*
 * validationFormat.h
 *
 *  Created on: 2017-09-11
 *      Author: Edwin Andrad Ospino
 */

#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_
#include "Date.h"


namespace util {

bool validerNas(const std::string& p_nas);
int foncSommeDigit(const char& digSousChaine, const int& j);
bool validerDigit(const std::string& digit);
bool valideDateDeNaissance(const util::Date& p_dateNaissance);


} // fin du namespace

#endif /* VALIDATIONFORMAT_H_ */
