/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:11:16 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/20 15:12:44 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "Zombie.hpp"
#include <iostream>

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif