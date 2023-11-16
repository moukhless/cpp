/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:21:55 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/16 15:14:48 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "Animal";
	std::cout << "Default constructor called from WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor called from WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	type = copy.type;
	std::cout << "Constructor called from WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	if (this != &obj) {
		type = obj.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound( void ) const{
	std::cout << "Sound of Animal" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (type);
}