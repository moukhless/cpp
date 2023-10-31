/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:55:43 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/31 23:16:38 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) {
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& clapT ) {
	
	name = clapT.name;
	hitPoints = clapT.hitPoints;
	energyPoints = clapT.energyPoints;
	attackDamage = clapT.attackDamage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& clapT){
	name = clapT.name;
	hitPoints = clapT.hitPoints;
	energyPoints = clapT.energyPoints;
	attackDamage = clapT.attackDamage;
	return (*this);
}

void	ClapTrap::attack( const std::string& target ) {
	if (energyPoints == 0 )
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " has no hit points" << std::endl;
	else {
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " take " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (energyPoints == 0 )
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " has no hit points" << std::endl;
	else {
		hitPoints += amount;
		energyPoints -= 1;
		std::cout << "ClapTrap " << name << " repairs itself, it gets " << amount << " hit points back" << std::endl;
	}
}

void	ClapTrap::setName( std::string name ) {
	this->name = name;
}
void	ClapTrap::setHitsPoint( int hitsPoints ) {
	this->hitPoints = hitsPoints;
}
void	ClapTrap::setEnergyPoint( int energyPoints ) {
	this->energyPoints = energyPoints;
}
void	ClapTrap::setAttackDamage( int attackDamage ) {
	this->attackDamage = attackDamage;
}

std::string	ClapTrap::getName( void ){
	return (name);
}
int	ClapTrap::getHitsPoint( void ) {
	return (hitPoints);
}
int	ClapTrap::getEnergyPoint( void ) {
	return (energyPoints);
}
int	ClapTrap::getAttackDamage( void ) {
	return (attackDamage);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
