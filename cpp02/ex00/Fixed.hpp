/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:10:42 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/29 09:23:23 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		
		int					fixedPointValue;
		static const int	fractionalBits;

	public:

		Fixed( void );
		Fixed( Fixed& fixed);
		Fixed& operator=(const Fixed& fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif
