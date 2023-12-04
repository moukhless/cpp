#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm( "default_Presidentialform",  25, 5 ), target("default_target") {
}

PresidentialPardonForm::PresidentialPardonForm( std::string target , std::string name, int gradeToSign, int gradeToExec ) : AForm( name, gradeToSign, gradeToExec ), target(target) {
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm( "default_Presidentialform", 25, 5 ) {
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) {
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	if (this != &obj)
		target = obj.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > 150 || !getSign() || executor.getGrade() > 5)
		throw GradeTooLowException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();
	std::cout << target + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}