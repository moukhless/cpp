#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm( "default_Presidentialform", 25, 5 ), target("default_target") {
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm( target, 25, 5 ) {
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
	if (executor.getGrade() > 5)
		throw GradeTooLowException();
	if (!getSign())
		throw IsNotSigned();
	std::cout << target + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}