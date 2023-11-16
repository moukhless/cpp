/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:26:10 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/15 19:41:57 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ){
	for(int i = 0; i < 4; i++)
		arr[i] = NULL;
}
Character::Character( const Character& character ) {
	name = character.name;
}
Character::Character( std::string const & name ) {
	this->name = name;
}
Character& Character::operator=( const Character& character ) {
	if (this == &character)
		return (*this);
	name = character.name;
	return (*this);
}

std::string const & Character::getName( void ) const {
	return (name);
}
void Character::equip(AMateria* m) {
	int	i = 0;
	while (arr[i] != NULL && i < 4)
		i++;
	if (i < 4)
		arr[i] = m;
}
void Character::unequip(int idx) {
	
}
void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3)
		arr[idx]->use(target);
}
AMateria* Character::clone( void ) const {
	
}

Character::~Character( void ){
	for(int i = 0; i < 4; i++)
		delete arr[i];
}