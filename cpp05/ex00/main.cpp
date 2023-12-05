/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/05 14:18:24 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("abdellah", 1);
		Bureaucrat c(b);

		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		c.decrementGrade();
		std::cout << c.getName() << std::endl;
		std::cout << c.getGrade() << std::endl;
		Bureaucrat d("omar", 5);
		std::cout << d.getName() << std::endl;
		std::cout << d.getGrade() << std::endl;
		std::cout << b;
		b.incrementGrade();
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}