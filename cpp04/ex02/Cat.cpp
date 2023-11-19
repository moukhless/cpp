/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:46:12 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/19 14:51:02 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default constructor called from Cat" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat( const Cat& cat ) {
	std::cout << "Constructor called from Cat" << std::endl;
	brain = new Brain();
	type = cat.type;
	*brain = *cat.brain;
}

Cat& Cat::operator=( const Cat& cat ) {
	if (this == &cat)
		return (*this);
	type = cat.type;
	*brain = *cat.brain;
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