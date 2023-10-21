/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:30:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/21 17:57:18 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

# include <iostream>

class Weapon
{
	private:

		std::string	type;

	public:
		
		Weapon( std::string type);

		const std::string&	getType();
		void				setType( std::string type );
};




#endif