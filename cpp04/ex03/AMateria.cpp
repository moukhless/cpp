/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:09:09 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/15 14:09:29 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
}
AMateria::AMateria( const AMateria& amateria ) {
	type = amateria.type;
}
AMateria::AMateria( std::string const & type ) {
	this->type = type;
}
AMateria& AMateria::operator=( const AMateria& amateria ) {
	if (this == &amateria)
		return (*this);
	type = amateria.type;
	return (*this);
}

std::string const & AMateria::getType( void ) const {
	return (type);
}
void AMateria::use(ICharacter& target) {
	if (type == "cure")
		std::cout << "* heals " << target.name <<"’s wounds *" << std::endl;
	else
		std::cout << "Ice: \"* shoots an ice bolt at " << target.name << " *\"" << std::endl;
}

AMateria::~AMateria( void ) {
}
