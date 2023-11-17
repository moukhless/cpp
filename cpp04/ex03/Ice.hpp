/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:39:12 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/17 10:23:58 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

public:

	Ice( void );
	Ice( const Ice& ice );
	Ice& operator=( const Ice& ice);

	virtual AMateria* clone( void ) const;
	void use(ICharacter& target);

	~Ice( void );
};

#endif