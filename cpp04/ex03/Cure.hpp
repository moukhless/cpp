/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:16:06 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/16 12:04:42 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

public:

	Cure( void );
	Cure( const Cure& cure );
	Cure& operator=( const Cure& cure );

	virtual AMateria* clone( void ) const;
	void use(ICharacter& target);

	~Cure( void );
};

#endif