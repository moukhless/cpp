/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:17:06 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/30 16:17:29 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:

		Fixed const x;
		Fixed const y;
	
	public:
	
		Point( void );
		Point( const float fNum, const float sNum );
		Point( const Point& point );
		Point&	operator=(const Point& point);
		Fixed	getx( void ) const;
		Fixed	gety( void ) const;
		~Point();
};

#endif