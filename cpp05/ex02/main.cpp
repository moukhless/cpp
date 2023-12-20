/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/20 09:08:02 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Bureaucrat b("abdellah", 1);
		ShrubberyCreationForm ShrubberyForm("target");
		RobotomyRequestForm	RobotomyForm("robo");
		PresidentialPardonForm PresidentialForm("pre");

		std::cout << b;
		b.signForm(ShrubberyForm);
		b.signForm(RobotomyForm);
		b.signForm(PresidentialForm);
		Bureaucrat d("omar", 30);
		std::cout << d;
		d.executeForm(ShrubberyForm);
		d.executeForm(RobotomyForm);
		d.executeForm(PresidentialForm);
		std::cout << ShrubberyForm;
		std::cout << RobotomyForm;
		std::cout << PresidentialForm;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}