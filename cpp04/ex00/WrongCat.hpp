/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:10:42 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/16 15:11:10 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:

	WrongCat( void );
	WrongCat( const WrongCat& wrongCat );
	WrongCat& operator=( const WrongCat& wrongCat );

	void	makeSound( void ) const;
	std::string	getType( void );
	
	~WrongCat( void );
};

#endif