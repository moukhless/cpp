/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:40:44 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/30 20:09:25 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Fixed.h"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixed )
{
	this->fixedPointValue = fixed.fixedPointValue;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int value )
{
	fixedPointValue = value << fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value )
{
	fixedPointValue = roundf(value * myPow(2, fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->fixedPointValue = fixed.fixedPointValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed )
{
	os << fixed.toFloat();
	return (os);
}

void Fixed::setRawBits( int const raw )
{
	fixedPointValue = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}