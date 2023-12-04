/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/04 16:58:58 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Bureaucrat b("abdellah", 1);
		Intern someRandomIntern;
		AForm* scf;
		AForm* rrf;
		AForm* ppf;
		scf = someRandomIntern.makeForm("shrubbery creation", "shrubbery");
		rrf = someRandomIntern.makeForm("robotomy request", "robotomy");
		ppf = someRandomIntern.makeForm("presidential pardon", "presidential");

		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		if (scf) {
			scf->beSigned(b);
			b.signForm(*scf);
		}
		if (rrf) {
			rrf->beSigned(b);
			b.signForm(*rrf);
		}
		if (ppf) {
			ppf->beSigned(b);
			b.signForm(*ppf);
		}
		Bureaucrat d("omar", 5);
		std::cout << d.getName() << std::endl;
		std::cout << d.getGrade() << std::endl;
		if (scf)
			d.executeForm(*scf);
		if (rrf)
			d.executeForm(*rrf);
		if (ppf)
			d.executeForm(*ppf);
		delete scf;
		delete rrf;
		delete ppf;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}