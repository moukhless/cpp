/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:18:49 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/15 14:12:34 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter( void ) {
	for(int i = 0; i < 4; i++)
		arr[i] = NULL;
	for(int i = 0; i < 2; i++)
		tmpArr[i] = NULL;
}
ICharacter::ICharacter( const ICharacter& icharacter ) {
	name = icharacter.name;
}
ICharacter::ICharacter( std::string const & name ) {
	this->name = name;
}
ICharacter& ICharacter::operator=( const ICharacter& icharacter ) {
	if (this == &icharacter)
		return (*this);
	name = icharacter.name;
}

std::string const & ICharacter::getName( void ) const {
	return (name);
}
void ICharacter::equip(AMateria* m) {
	int	i = 0;
	while (arr[i] != NULL && i < 4)
		i++;
	if (i < 4)
		arr[i] = m;
}
void ICharacter::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3)
		arr[idx]->use(target);
}

ICharacter::~ICharacter( void ) {
	for(int i = 0; i < 4; i++)
		delete arr[i];
}