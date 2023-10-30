/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:51:31 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/30 20:05:20 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);
Fixed	area(Point const a, Point const b, Point const c);

#endif