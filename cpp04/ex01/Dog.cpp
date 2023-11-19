/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:44:41 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/18 17:44:10 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default constructor called from Dog" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog( const Dog& dog ) {
	std::cout << "Constructor called from Dog" << std::endl;
	brain = new Brain();
	type = dog.type;
	*brain = *dog.brain;
}

Dog&	Dog::operator=( const Dog& dog ) {
	if (this == &dog)
		return (*this);
	type = dog.type;
	*brain = *dog.brain;
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