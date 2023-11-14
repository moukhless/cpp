/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:53:12 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/04 15:59:36 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default constructor called from Brain" << std::endl;
}

Brain::Brain( const Brain& brain ) {
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	std::cout << "Constructor called from Brain" << std::endl;
}

Brain& Brain::operator=( const Brain& brain ) {
	if (this == &brain)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Destructor called from Brain" << std::endl;
}