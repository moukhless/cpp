/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:59:27 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/23 14:17:33 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class Zombie {
	
	private:

		std::string	name;

	public:

		Zombie( std::string name );
		~Zombie( void );

		void		announce( void );
};

#endif