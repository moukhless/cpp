/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:35:30 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/03 14:41:00 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
	name = "";
	ClapTrap::name = "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap( std::string name ) {
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamondT) {
	*this = diamondT;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& diamondT) {
	if (this == &diamondT)
		return (*this);
	name = diamondT.name;
	hitPoints = diamondT.hitPoints;
	energyPoints = diamondT.energyPoints;
	attackDamage = diamondT.attackDamage;
	return (*this);
}

void	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "my name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap() {
}