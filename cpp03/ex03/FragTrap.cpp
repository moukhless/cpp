/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:49:36 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/03 14:42:37 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	name = "";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Default constructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap( std::string name ) {
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Constructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap( const FragTrap& fragT) {
	name = fragT.name;
	hitPoints = fragT.hitPoints;
	energyPoints = fragT.energyPoints;
	attackDamage = fragT.attackDamage;
	std::cout << "Copy constructor called from FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& fragT) {
	if (this == &fragT)
		return (*this);
	name = fragT.name;
	hitPoints = fragT.hitPoints;
	energyPoints = fragT.energyPoints;
	attackDamage = fragT.attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "positive high fives" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Destructor called from FragTrap" << std::endl;
}