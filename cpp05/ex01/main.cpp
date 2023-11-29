/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/29 20:04:00 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("abdellah", 1);
		Form form("form", false, 10, 20);
		Form formS("form", false, 10, 20);

		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		form.beSigned(b);
		b.signForm(form);
		Bureaucrat d("omar", 50);
		std::cout << d.getName() << std::endl;
		std::cout << d.getGrade() << std::endl;
		formS.beSigned(d);
		d.signForm(formS);
		std::cout << b;
		b.incrementGrade();
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}