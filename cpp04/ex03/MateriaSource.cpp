/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:56:17 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/17 15:08:53 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for(int i = 0; i < 4; i++)
		arr[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for(int i = 0; i < 4; i++)
		delete arr[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	for (int i = 0; i < 4; i++) {
		if (copy.arr[i]) {
			if (arr[i])
				delete arr[i];
			arr[i] = copy.arr[i]->clone();
		}
		else
			arr[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	if (this != &obj) {
		for (int i = 0; i < 4; i++) {
			if (obj.arr[i])
			{
				if (arr[i])
					delete arr[i];
				arr[i] = obj.arr[i]->clone();
			}
			else
				arr[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* aMateria) {
		int	i = 0;
		while (arr[i] != NULL && i < 4)
			i++;
		if (i < 4) {
			arr[i] = aMateria;
		}
}

AMateria* MateriaSource::createMateria(std::string  const& type) {
	for(int i = 0; i < 4; i++) {
		if (arr[i]->getType() == type)
			return (arr[i]->clone());
	}
	return (0);
}
