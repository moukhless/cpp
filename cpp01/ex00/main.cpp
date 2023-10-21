/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:13:11 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/20 15:21:59 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	Zombie	*z;

	z = newZombie("Foo");
	z->announce();
	randomChump("Boo");
	delete z;
	return (0);
}