/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:40:30 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/31 13:56:55 by amoukhle         ###   ########.fr       */
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

		Fixed&	operator=( const Fixed& fixed );

		bool	operator>( const Fixed& fixed ) const;
		bool	operator<( const Fixed& fixed ) const;
		bool	operator>=( const Fixed& fixed ) const;
		bool	operator<=( const Fixed& fixed ) const;
		bool	operator==( const Fixed& fixed ) const;
		bool	operator!=( const Fixed& fixed ) const;

		Fixed	operator+( const Fixed& fixed );
		Fixed	operator-( const Fixed& fixed );
		Fixed	operator*( const Fixed& fixed );
		Fixed	operator/( const Fixed& fixed );

		Fixed	operator++( int );
		Fixed	operator++( void );
		Fixed	operator--( int );
		Fixed	operator--( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		int		toInt( void ) const;
		float	toFloat( void ) const;
		
		static Fixed&	min(Fixed& firstFixedNum, Fixed& secondFixedNum);
		static const Fixed&	min(const Fixed& firstFixedNum, const Fixed& secondFixedNum);

		static Fixed&	max(Fixed& firstFixedNum, Fixed& secondFixedNum);
		static const Fixed&	max(const Fixed& firstFixedNum, const Fixed& secondFixedNum);

		~Fixed();
};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed );
double	myPow(int num, int power);

#endif

