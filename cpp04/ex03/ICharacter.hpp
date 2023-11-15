/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:16:46 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/15 11:36:02 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter : public AMateria {

public:

	ICharacter( void );
	ICharacter( const ICharacter& icharacter );
	ICharacter( std::string const & name );
	ICharacter& operator=( const ICharacter& icharacter );

	virtual std::string const & getName( void ) const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

	virtual ~ICharacter( void );
};

#endif