#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm( "default_Robotomyform", 72, 45 ), target("default_target") {
}

RobotomyRequestForm::RobotomyRequestForm( std::string target , std::string name, int gradeToSign, int gradeToExec ) : AForm( name, gradeToSign, gradeToExec ), target(target) {
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm( "default_Robotomyform", 72, 45 ) {
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) {
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	if (this != &obj)
		target = obj.target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > 150 || !getSign() || executor.getGrade() > 45) {
		std::cout << target + " failed to robotimaze" << std::endl;
		throw GradeTooLowException();
	}
	if (executor.getGrade() < 1) {
		std::cout << target + " failed to robotimaze" << std::endl;
		throw GradeTooHighException();
	}
	std::cout << "Drrrrrrrrrrrr..." << std::endl;
	std::cout << target + " has been robotomized successfully 50% of the time." << std::endl;
}