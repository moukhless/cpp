/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:54:29 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/31 22:17:03 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap army("jack");
	ClapTrap soldier("mrabti");

	army.attack("mrabti");
	soldier.takeDamage(5);
	army.attack("mrabti");
	soldier.takeDamage(4);
	soldier.beRepaired(10);
	soldier.attack("jack");
	army.takeDamage(5);
	soldier.attack("jack");
	army.takeDamage(5);
	soldier.attack("jack");
	army.takeDamage(5);
	soldier.attack("jack");
	army.takeDamage(5);
	army.beRepaired(20);
	
	return (0);
}