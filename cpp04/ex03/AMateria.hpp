/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:00:36 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/18 14:10:35 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATIRIA_HPP
# define AMATIRIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

protected:

	std::string	type;

public:

	AMateria( void );
	AMateria( const AMateria& amateria );
	AMateria( std::string const & type );
	AMateria& operator=( const AMateria& amateria );

	std::string const & getType( void ) const;
	virtual AMateria* clone( void ) const = 0;
	virtual void use(ICharacter& target);

	virtual ~AMateria();
};

#endif