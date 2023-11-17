/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:54:31 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/17 14:52:57 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria	*arr[4];

public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& materiaSource );
	MateriaSource& operator=( const MateriaSource& materiaSource );
	~MateriaSource( void );

	AMateria* createMateria( std::string const & type );
	void learnMateria( AMateria* );
};

#endif