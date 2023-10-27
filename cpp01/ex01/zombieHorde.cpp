/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:32:37 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/24 17:33:47 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0 || N == 0)
		exit (1);
	Zombie *arrZ = new Zombie[N];

	for (int i = 0; i < N; i++)
		arrZ[i].SetName(name);
	return (arrZ);
}
