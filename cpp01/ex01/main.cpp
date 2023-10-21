/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:49:14 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/21 14:23:58 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"


int main()
{
	Zombie	*arrZ;

	arrZ = zombieHorde(5, "Foo");
	for (int i = 0; i < 5; i++)
		arrZ[i].announce();
	delete[] arrZ;
	return (0);
}
