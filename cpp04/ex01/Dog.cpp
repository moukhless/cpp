/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:44:41 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/04 16:30:37 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor called from Dog" << std::endl;
}

Dog::Dog( const Dog& dog ) {
	type = dog.type;
	std::cout << "Constructor called from Dog" << std::endl;
}

Dog&	Dog::operator=( const Dog& dog ) {
	if (this == &dog)
		return (*this);
	type = dog.type;
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << "woof woof woof" << std::endl;
}

std::string	Dog::getType( void ) const {
	return (type);
}

Dog::~Dog( void ) {
	delete brain;
	std::cout << "Destructor called from Dog" << std::endl;
}