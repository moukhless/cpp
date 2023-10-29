/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:40:30 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/29 15:04:56 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		
		int					fixedPointValue;
		static const int	fractionalBits;

	public:

		Fixed( void );
		Fixed( const Fixed& fixed);
		Fixed( const int value );
		Fixed( const float value );
		Fixed& operator=( const Fixed& fixed );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
		~Fixed();
};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed );

#endif

