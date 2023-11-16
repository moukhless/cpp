/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:56:17 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/16 20:01:12 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() {
	for(int i = 0; i < 4; i++)
		arr[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for(int i = 0; i < 4; i++)
		delete arr[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	if (this != &obj) {
		*this = obj;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* aMateria) {
	if (aMateria->getType() == "ice") {
		AMateria *materia = new Ice();
	}
	else if (aMateria->getType() == "cure") {
		AMateria *materia = new Cure();
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type == "ice") {
		AMateria *materia = new Ice();
		return (materia);
	}
	else if (type == "cure") {
		AMateria *materia = new Cure();
		return (materia);
	}
	return (0);
}
