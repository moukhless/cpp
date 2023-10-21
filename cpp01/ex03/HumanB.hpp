/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:11:20 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/21 17:55:44 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
	
		Weapon*		weapon;
		std::string	name;

	public:

		HumanB( std::string name );
		void	attack();
		void	setWeapon(Weapon& Weapon);
};


#endif