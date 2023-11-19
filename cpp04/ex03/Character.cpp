/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:26:10 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/19 15:33:58 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character( void ){
	for(int i = 0; i < 4; i++)
		arr[i] = NULL;
	for(int i = 0; i < 4; i++)
		garcoll[i] = NULL;
}
Character::Character( const Character& character ) {
	name = character.name;
	for (int i = 0; i < 4; i++) {
		if (arr[i])
			delete arr[i];
		if (character.arr[i])
			arr[i] = character.arr[i]->clone();
		else
			arr[i] = NULL;
	}
	for(int i = 0; i < 4; i++)
		garcoll[i] = NULL;
}
Character::Character( std::string const & name ) {
	this->name = name;
	for(int i = 0; i < 4; i++)
		arr[i] = NULL;
	for(int i = 0; i < 4; i++)
		garcoll[i] = NULL;
}
Character& Character::operator=( const Character& character ) {
	if (this == &character)
		return (*this);
	name = character.name;
	for (int i = 0; i < 4; i++) {
		if (arr[i])
			delete arr[i];
		if (character.arr[i])
			arr[i] = character.arr[i]->clone();
		else
			arr[i] = NULL;
	}
	return (*this);
}

std::string const & Character::getName( void ) const {
	return (name);
}

void Character::equip(AMateria* m) {
	int	i = 0;
	while (arr[i] != NULL && i < 4)
		i++;
	if (i < 4 && m)
		arr[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		int i = 0;
		while (garcoll[i] && i < 1024)
			i++;
		garcoll[i] = arr[idx];
		arr[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3 && arr[idx])
		arr[idx]->use(target);
}

Character::~Character( void ){
	for(int i = 0; i < 4; i++)
		delete arr[i];
	for(int i = 0; i < 4; i++)
		delete garcoll[i];
}