/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:47:00 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/21 22:38:45 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:

		void	complain( std::string level );
};


#endif
