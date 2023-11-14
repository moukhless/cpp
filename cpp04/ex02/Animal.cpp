/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:41:04 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/14 21:43:30 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	type = "Animal";
	std::cout << "Default constructor called from Animal" << std::endl;
}

Animal::Animal( const Animal& animal ) {
	type = animal.type;
	std::cout << "Constructor called from Animal" << std::endl;
}

Animal& Animal::operator=( const Animal& animal ) {
	if (this == &animal)
		return (*this);
	type = animal.type;
	return (*this);
}

void	Animal::makeSound( void ) const{
	std::cout << "Sound of Animal" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (type);
}

Animal::~Animal( void ) {
	std::cout << "Destructor called from Animal" << std::endl;
}