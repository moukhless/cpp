/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:38:52 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/20 09:32:18 by amoukhle         ###   ########.fr       */
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
		AForm* scf = someRandomIntern.makeForm("shrubbery creation", "shrubbery");
		AForm* rrf = someRandomIntern.makeForm("robotomy request", "robotomy");
		AForm* ppf = someRandomIntern.makeForm("presidential pardon", "presidential");

		std::cout << b;
		if (scf)
			b.signForm(*scf);
		if (rrf)
			b.signForm(*rrf);
		if (ppf)
			b.signForm(*ppf);
		Bureaucrat d("omar", 5);
		std::cout << d;
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
		std::cerr << e.what() << std::endl;
	}
	return (0);
}