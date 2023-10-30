/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:39:50 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/30 17:27:58 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Point.h"

int main( void ) {
	Point a(1, 1);
	Point b(4, 5);
	Point c(4, 2);
	Point point(3, 2);

	std::cout << bsp(a, b, c, point) << std::endl;
return 0;
}