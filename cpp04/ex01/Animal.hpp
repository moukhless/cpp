/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:39:55 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/14 22:02:06 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

protected:

	std::string type;

public:

	Animal( void );
	Animal( const Animal& animal );
	Animal&	operator=( const Animal& animal );

	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;

	virtual ~Animal( void );
};




#endif