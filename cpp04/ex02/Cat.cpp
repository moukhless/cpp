/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:46:12 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/04 16:30:32 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor called from Cat" << std::endl;
}

Cat::Cat( const Cat& cat ) {
	type = cat.type;
	std::cout << "Constructor called from Cat" << std::endl;
}

Cat& Cat::operator=( const Cat& cat ) {
	if (this == &cat)
		return (*this);
	type = cat.type;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "meow meow meow" << std::endl;
}

std::string	Cat::getType( void ) const {
	return (type);
}

Cat::~Cat( void ) {
	delete brain;
	std::cout << "Destructor called from Cat" << std::endl;
}