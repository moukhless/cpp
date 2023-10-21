/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:59:27 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/20 15:17:57 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class Zombie {
	
	private:

		std::string	name;

	public:

		void		announce( void );
		void		SetName( std::string name);

		~Zombie( void );
};

#endif