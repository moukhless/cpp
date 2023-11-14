/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:43:40 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/14 22:01:58 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:

	Brain* brain;

public:

	Dog( void );
	Dog( const Dog& dog );
	Dog&	operator=( const Dog& dog );

	void	makeSound( void ) const;
	std::string	getType( void ) const;

	~Dog( void );
};




#endif