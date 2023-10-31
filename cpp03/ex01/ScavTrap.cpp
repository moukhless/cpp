/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:44:20 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/31 23:29:40 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "Default constructor called from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( std::string name ){
	setName(name);
	setHitsPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << "Constructor called from ScavTrap" << std::endl;
}

void	ScavTrap::attack( const std::string& target) {
	if (getEnergyPoint() == 0 )
		std::cout << "ScavTrap " << getName() << " has no energy points" << std::endl;
	else if (getHitsPoint() <= 0)
		std::cout << "ScavTrap " << getName() << " has no hit points" << std::endl;
	else {
		setEnergyPoint(getEnergyPoint() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor called from ScavTrap" << std::endl;
}