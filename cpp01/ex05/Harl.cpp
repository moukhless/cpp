/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:49:29 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/21 22:38:51 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info( void )
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}
void	Harl::complain( std::string level )
{
	
}