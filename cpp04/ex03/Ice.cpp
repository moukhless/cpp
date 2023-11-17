/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:40:35 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/17 14:56:12 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	type = "ice";
}
Ice::Ice( const Ice& ice ) {
	type = ice.type;
}
Ice& Ice::operator=( const Ice& ice) {
	if (this == &ice)
		return (*this);
	type = ice.type;
	return (*this);
}

AMateria* Ice::clone( void ) const {
	AMateria *ice = new Ice();
	return (ice);
}
void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice( void ) {
}
