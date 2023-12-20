/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/20 08:07:01 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("abdellah", 2);

		std::cout << b;
		Bureaucrat d("omar", 50);
		std::cout << d;
		d.decrementGrade();
		std::cout << d;
		b.incrementGrade();
		std::cout << b;
		
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}