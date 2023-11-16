/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:24:32 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/16 14:26:33 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter{

private:

	AMateria	*arr[4];
	std::string	name;

public:

	Character( void );
	Character( const Character& character );
	Character( std::string const & name );
	Character& operator=( const Character& name );

	std::string const & getName( void ) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria* clone( void ) const;

	~Character( void );
};

#endif