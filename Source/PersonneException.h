/*
 * PersonneException.h
 *
 *  Created on: 2017-12-03
 *      Author: etudiant
 */


#include"ContratException.h"

#ifndef PERSONNEEXCEPTION_H_
#define PERSONNEEXCEPTION_H_

namespace elections {

class PersonneException :public std::runtime_error
{
public:
	PersonneException(const std::string& p_raison);
};

class PersonneDejaPresentException : public PersonneException
{
public:
	PersonneDejaPresentException(const std::string& p_raison);
};

class PersonneAbsenteException : public PersonneException
{
public:
	PersonneAbsenteException(const std::string& p_raison);

};

} /* namespace elections */

#endif /* PERSONNEEXCEPTION_H_ */
