/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:41:36 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/23 16:22:35 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( const std::string type )
{
	this->type = type;
}

const std::string&	Weapon::getType()
{
	std::string&	refType = type;
	return (refType);
}

void	Weapon::setType( std::string type )
{
	this->type = type;
}
