/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:54:29 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/31 23:29:04 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

	ScavTrap army("jack");
	ScavTrap soldier("mrabti");
	ScavTrap member;

	army.attack("mrabti");
	soldier.takeDamage(5);
	army.attack("mrabti");
	soldier.takeDamage(4);
	soldier.beRepaired(10);
	soldier.attack("jack");
	army.takeDamage(20);
	soldier.attack("jack");
	army.takeDamage(20);
	soldier.attack("jack");
	army.takeDamage(20);
	soldier.attack("jack");
	soldier.attack("jack");
	army.takeDamage(20);
	army.takeDamage(20);
	army.beRepaired(20);
	army.guardGate();
	member = army;
	member.beRepaired(20);
	
	return (0);
}