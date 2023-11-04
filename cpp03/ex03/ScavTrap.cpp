/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:44:20 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/03 14:43:11 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	name = "";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "Default constructor called from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( std::string name ){
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "Constructor called from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& scavT) {
	name = scavT.name;
	hitPoints = scavT.hitPoints;
	energyPoints = scavT.energyPoints;
	attackDamage = scavT.attackDamage;
	std::cout << "Copy constructor called from ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& scavT) {
	if (this == &scavT)
		return (*this);
	name = scavT.name;
	hitPoints = scavT.hitPoints;
	energyPoints = scavT.energyPoints;
	attackDamage = scavT.attackDamage;
	return (*this);
}

void	ScavTrap::attack( const std::string& target) {
	if (energyPoints == 0 )
		std::cout << "ScavTrap " << name << " has no energy points" << std::endl;
	else if (hitPoints <= 0)
		std::cout << "ScavTrap " << name << " has no hit points" << std::endl;
	else {
		energyPoints -= 1;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor called from ScavTrap" << std::endl;
}