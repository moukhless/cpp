/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/05 14:32:12 by amoukhle         ###   ########.fr       */
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

		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		b.signForm(ShrubberyForm);
		b.signForm(RobotomyForm);
		b.signForm(PresidentialForm);
		Bureaucrat d("omar", 50);
		std::cout << d.getName() << std::endl;
		std::cout << d.getGrade() << std::endl;
		d.executeForm(ShrubberyForm);
		d.executeForm(RobotomyForm);
		d.executeForm(PresidentialForm);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}