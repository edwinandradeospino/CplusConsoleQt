/*
 * PersonneException.cpp
 *
 *  Created on: 2017-12-03
 *      Author: etudiant
 */

#include "PersonneException.h"

namespace elections {

PersonneException::PersonneException(const std::string& p_raison):
		std::runtime_error(p_raison)

{
    PRECONDITION(!p_raison.empty());
}

PersonneDejaPresentException::PersonneDejaPresentException(const std::string& p_raison):
		elections::PersonneException(p_raison)

{
	PRECONDITION(!p_raison.empty());

}

PersonneAbsenteException::PersonneAbsenteException(const std::string& p_raison):
				elections::PersonneException(p_raison)

{
	PRECONDITION(!p_raison.empty());

}

} /* namespace elections */
