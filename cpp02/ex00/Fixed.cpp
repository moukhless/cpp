/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:11:02 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/29 09:38:14 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed& fixed )
{
	this->fixedPointValue = fixed.fixedPointValue;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->fixedPointValue = fixed.fixedPointValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}