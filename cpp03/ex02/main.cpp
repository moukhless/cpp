/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:54:29 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/02 15:32:19 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {

	FragTrap army("jack");
	FragTrap soldier("mrabti");
	FragTrap memeber;

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
	army.takeDamage(50);
	army.takeDamage(50);
	army.takeDamage(50);
	army.beRepaired(20);
	memeber = soldier;
	memeber.attack("jack");
	army.highFivesGuys();
	soldier.highFivesGuys();
	
	return (0);
}