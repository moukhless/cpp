/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:54:59 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/02 19:59:29 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {


protected:

		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& clapT );
		ClapTrap& operator=( const ClapTrap& clapT );

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		~ClapTrap( void );

};


#endif