/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:50:47 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/04 16:04:20 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

private:

	std::string ideas[100];

public:

	Brain( void );
	Brain( const Brain& brain );
	Brain& operator=( const Brain& brain );
	~Brain( void );
};


#endif