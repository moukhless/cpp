/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/05 14:18:29 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("abdellah", 1);
		Form form("form", 10, 20);
		Form formS("form", 50, 70);

		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		b.signForm(form);
		std::cout << b;
		Bureaucrat d("omar", 100);
		std::cout << d.getName() << std::endl;
		std::cout << d.getGrade() << std::endl;
		d.signForm(formS);
		std::cout << d;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}