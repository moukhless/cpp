/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:17:54 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/30 17:31:02 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Point.h"

Point::Point( void ) : x(0), y(0)
{
}
Point::Point(const float fNum, const float sNum) : x(fNum), y(sNum)
{
}
Point::Point( const Point& point ) : x(point.x), y(point.y)
{
}

Point&	Point::operator=( const Point& point )
{
	Fixed *tmpx = const_cast<Fixed *>(&x);
	*tmpx = point.x;
	Fixed *tmpy = const_cast<Fixed *>(&y);
	*tmpy = point.y;
	return (*this);
}

Fixed	Point::getx( void ) const
{
	return (x);
}
Fixed	Point::gety( void ) const
{
	return (y);
}

float	distanceBetweenTwoPoints( Point const a, Point const b )
{
	return (sqrt(std::pow((a.getx().toFloat() - b.getx().toFloat()), 2) + std::pow((a.gety().toFloat() - b.gety().toFloat()), 2)));
}

float	area(Point const a, Point const b, Point const c)
{
	float	ab = distanceBetweenTwoPoints(a, b);
	float	ac = distanceBetweenTwoPoints(a, c);
	float	bc = distanceBetweenTwoPoints(b, c);
	float	p = (ab + bc + ac) / 2;

	return (sqrt(p * (p - ab) * (p - ac) * (p - bc)));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	areaABC = area(a, b, c);
	float	areaABPoint = area(a, b, point);
	float	areaACPoint = area(a, c, point);
	float	areaBCPoint = area(b, c, point);

	if (areaABC == areaABPoint + areaACPoint + areaBCPoint)
		return (true);
	return (false);
}

Point::~Point()
{
}