/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:41:35 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/02 19:45:22 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& scavrT);
		ScavTrap& operator=( const ScavTrap& scavT);

		void	attack( const std::string& target );
		void	guardGate();

		~ScavTrap( void );
};


#endif