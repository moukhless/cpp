#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm( "default_Robotomyform", 72, 45 ), target("default_target") {
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
	if (!getSign() || executor.getGrade() > 45) {
		std::cout << target + " failed to robotimaze." << std::endl;
		throw GradeTooLowException();
	}
	std::srand(time(NULL));
	int rnum = std::rand();
	if (rnum % 2 != 0) {
		std::cout << "Drrrrrrrrrrrr..." << std::endl;
		std::cout << target + " has been robotomized." << std::endl;
	}
	else
		std::cout << target + " failed to robotimaze." << std::endl;
}