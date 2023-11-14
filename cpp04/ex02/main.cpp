/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:09:11 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/14 21:58:33 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

int	size = 4;
const Animal *meta[size];
const Cat *cat = new Cat();
const Animal *dog = new Dog();

for (int i = 0; i < size; i++)
{
	if (i < size / 2)
		meta[i] = new Dog();
	else
		meta[i] = new Cat();
}

dog->makeSound();
std::cout << dog->getType() << std::endl;
std::cout << cat->getType() << std::endl;
cat->makeSound();
for (int i = 0; i < size; i++)
	meta[i]->makeSound();

for (int i = 0; i < size; i++)
	delete meta[i];

return 0;
}