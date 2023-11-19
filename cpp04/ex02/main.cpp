/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:09:11 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/18 14:29:50 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

int	size = 4;
const Animal *meta[size];

for (int i = 0; i < size; i++)
{
	if (i < size / 2)
		meta[i] = new Dog();
	else
		meta[i] = new Cat();
}

for (int i = 0; i < size; i++)
	meta[i]->makeSound();

for (int i = 0; i < size; i++)
	delete meta[i];

return 0;
}