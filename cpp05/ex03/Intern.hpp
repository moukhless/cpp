#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& obj);

		AForm*	makeShrubbery(std::string target);
		AForm*	makeRobotomy(std::string target);
		AForm*	makePresidential(std::string target);

		AForm*	makeForm( std::string name, std::string target);
};

#endif