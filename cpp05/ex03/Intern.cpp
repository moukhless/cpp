#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern& Intern::operator=(const Intern& obj) {
	if (this != &obj){
	}
	return (*this);
}

AForm*	Intern::makeShrubbery(std::string target) {
	AForm *form = new ShrubberyCreationForm(target);
	return (form);
}
AForm*	Intern::makeRobotomy(std::string target) {
	AForm *form = new RobotomyRequestForm(target);
	return (form);
}
AForm*	Intern::makePresidential(std::string target) {
	AForm *form = new PresidentialPardonForm(target);
	return (form);
}

AForm*	Intern::makeForm( std::string name, std::string target) {
	AForm* (Intern::*ptr[])(std::string) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	std::string	arr[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for(int i = 0; i < 4; i++)
	{
		if (name == arr[i])
		{
			std::cout << "Intern creat " + name << std::endl;
			return (this->*ptr[i])(target);
			break ;
		}
	}
	std::cout << "Wrong form's name: " + name << std::endl;;
	return (NULL);
}
