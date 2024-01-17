/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:40:44 by amoukhle          #+#    #+#             */
/*   Updated: 2024/01/13 16:10:17 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	fixedPointValue = 0;
}
Fixed::Fixed(const Fixed& fixed )
{
	this->fixedPointValue = fixed.fixedPointValue;
}
Fixed::Fixed( const int value )
{
	fixedPointValue = value << fractionalBits;
}
Fixed::Fixed( const float value )
{
	fixedPointValue = roundf(value * myPow(2, fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->fixedPointValue = fixed.fixedPointValue;
	return (*this);
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed )
{
	os << fixed.toFloat();
	return (os);
}

bool	Fixed::operator>( const Fixed& fixed ) const
{
	if (fixedPointValue > fixed.fixedPointValue)
		return (true);
	return (false);
}
bool	Fixed::operator<( const Fixed& fixed ) const
{
	if (fixedPointValue < fixed.fixedPointValue)
		return (true);
	return (false);
}
bool	Fixed::operator>=( const Fixed& fixed ) const
{
	if (fixedPointValue >= fixed.fixedPointValue)
		return (true);
	return (false);
}
bool	Fixed::operator<=( const Fixed& fixed ) const
{
	if (fixedPointValue <= fixed.fixedPointValue)
		return (true);
	return (false);
}
bool	Fixed::operator==( const Fixed& fixed ) const
{
	if (fixedPointValue == fixed.fixedPointValue)
		return (true);
	return (false);
}
bool	Fixed::operator!=( const Fixed& fixed ) const
{
	if (fixedPointValue != fixed.fixedPointValue)
		return (true);
	return (false);
}

Fixed	Fixed::operator+( const Fixed& fixed )
{
	Fixed tmp = *this;
	tmp.fixedPointValue = fixedPointValue + fixed.fixedPointValue;
	return (tmp);
}
Fixed	Fixed::operator-( const Fixed& fixed )
{
	Fixed tmp = *this;
	tmp.fixedPointValue = fixedPointValue - fixed.fixedPointValue;
	return (tmp);
}
Fixed	Fixed::operator*( const Fixed& fixed )
{
	Fixed tmp = *this;
	tmp.fixedPointValue = toFloat() * fixed.toFloat() * myPow(2, fractionalBits);
	return (tmp);
}
Fixed	Fixed::operator/( const Fixed& fixed )
{
	Fixed tmp = *this;
	tmp.fixedPointValue = toFloat() / fixed.toFloat() * myPow(2, fractionalBits);
	return (tmp);
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = *this;
	fixedPointValue++;
	return (tmp);
}
Fixed	Fixed::operator++( void )
{
	fixedPointValue++;
	return (*this);
}
Fixed	Fixed::operator--( int )
{
	Fixed tmp = *this;
	fixedPointValue--;
	return (tmp);
}
Fixed	Fixed::operator--( void )
{
	fixedPointValue--;
	return (*this);
}

Fixed&	Fixed::min(Fixed& firstFixedNum, Fixed& secondFixedNum)
{
	if (firstFixedNum < secondFixedNum)
		return (firstFixedNum);
	return (secondFixedNum);
}
const Fixed&	Fixed::min(const Fixed& firstFixedNum, const Fixed& secondFixedNum)
{
	if (firstFixedNum < secondFixedNum)
		return (firstFixedNum);
	return (secondFixedNum);
}

Fixed&	Fixed::max(Fixed& firstFixedNum, Fixed& secondFixedNum)
{
	if (firstFixedNum > secondFixedNum)
		return (firstFixedNum);
	return (secondFixedNum);
}
const Fixed&	Fixed::max(const Fixed& firstFixedNum, const Fixed& secondFixedNum)
{
	if (firstFixedNum > secondFixedNum)
		return (firstFixedNum);
	return (secondFixedNum);
}

void Fixed::setRawBits( int const raw )
{
	fixedPointValue = raw;
}
int Fixed::getRawBits( void ) const
{
	return (fixedPointValue);
}

int Fixed::toInt( void ) const
{
	return (fixedPointValue >> fractionalBits);
}
float Fixed::toFloat( void ) const
{
	return (fixedPointValue / myPow(2, fractionalBits));
}

double	myPow(int num, int power)
{
	int	result = num;
	for (int i = 1; i < power; i++)
		result *= num;
	return (result);
}

Fixed::~Fixed()
{
}