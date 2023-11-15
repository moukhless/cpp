/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:17:05 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/15 11:50:52 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	type = "cure";
}
Cure::Cure( const Cure& cure ) {
	type = cure.type;
}
Cure& Cure::operator=( const Cure& cure ) {
	if (this == &cure)
		return (*this);
	type = cure.type;
	return (*this);
}

AMateria* Cure::clone( void ) const {
	AMateria *cure = new Cure();
	return (cure);
}
void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}

Cure::~Cure( void ){
}