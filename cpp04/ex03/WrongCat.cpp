/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:15:21 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/16 15:24:11 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	type = "WrongCat";
	std::cout << "Default constructor called from WrongCat" << std::endl;
}

WrongCat::WrongCat( const WrongCat& cat ) {
	type = cat.type;
	std::cout << "Constructor called from WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& cat ) {
	if (this == &cat)
		return (*this);
	type = cat.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << "WrongCAt meow meow meow" << std::endl;
}

std::string	WrongCat::getType( void ) {
	return (type);
}

WrongCat::~WrongCat( void ) {
	std::cout << "Destructor called from WrongCat" << std::endl;
}