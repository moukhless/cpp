/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:49:14 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/23 20:06:10 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	Zombie	*arrZ;
	int		N = 5;

	arrZ = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
		arrZ[i].announce();
	delete[] arrZ;
	return (0);
}
