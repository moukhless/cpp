/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:45:20 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/14 22:02:04 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:

	Brain* brain;

public:

	Cat( void );
	Cat( const Cat& cat );
	Cat&	operator=( const Cat& cat );

	void	makeSound( void ) const;
	std::string	getType( void ) const;

	~Cat( void );
};




#endif