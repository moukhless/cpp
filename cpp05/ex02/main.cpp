/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/04 16:57:37 by amoukhle         ###   ########.fr       */
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
		ShrubberyForm.beSigned(b);
		b.signForm(ShrubberyForm);
		RobotomyForm.beSigned(b);
		b.signForm(RobotomyForm);
		PresidentialForm.beSigned(b);
		b.signForm(PresidentialForm);
		Bureaucrat d("omar", 5);
		std::cout << d.getName() << std::endl;
		std::cout << d.getGrade() << std::endl;
		d.executeForm(ShrubberyForm);
		d.executeForm(RobotomyForm);
		d.executeForm(PresidentialForm);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}