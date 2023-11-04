/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:54:29 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/03 17:16:38 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {

	DiamondTrap army("jack");
	DiamondTrap soldier("mrabti");

	army.attack("mrabti");
	soldier.takeDamage(50);
	soldier.takeDamage(50);
	soldier.takeDamage(50);
	soldier.beRepaired(100);
	soldier.whoAmI();
	army.guardGate();
	
	return (0);
}