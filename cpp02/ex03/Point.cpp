/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:17:54 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/31 14:10:43 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Point.h"

Point::Point( void ) : x(0), y(0) {
}
Point::Point(const float fNum, const float sNum) : x(fNum), y(sNum) {
}
Point::Point( const Point& point ) : x(point.x), y(point.y) {
}

Point&	Point::operator=( const Point& point ) {
	Fixed *tmpx = const_cast<Fixed *>(&x);
	*tmpx = point.x;
	Fixed *tmpy = const_cast<Fixed *>(&y);
	*tmpy = point.y;
	return (*this);
}

Fixed	Point::getx( void ) const {
	return (x);
}
Fixed	Point::gety( void ) const {
	return (y);
}

Fixed	area(Point const a, Point const b, Point const c) {
	Fixed xy = (a.getx() * b.gety()) + (b.getx() * c.gety()) + (c.getx() * a.gety());
	Fixed yx = (a.gety() * b.getx()) + (b.gety() * c.getx()) + (c.gety() * a.getx());
	Fixed sum = xy - yx;
	if (sum < 0)
		sum = sum * (-1);
	return (sum / 2);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	areaABC = area(a, b, c);
	Fixed	areaABPoint = area(a, b, point);
	Fixed	areaACPoint = area(a, c, point);
	Fixed	areaBCPoint = area(b, c, point);

	if ((a.getx() == point.getx() && a.gety() == point.gety())
		|| (b.getx() == point.getx() && b.gety() == point.gety())
		|| (c.getx() == point.getx() && c.gety() == point.gety())
		|| areaABPoint == 0 || areaACPoint == 0 || areaBCPoint == 0)
		return (false);
	if (areaABC == areaABPoint + areaACPoint + areaBCPoint)
		return (true);
	return (false);
}

Point::~Point() {
}