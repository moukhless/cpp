#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) {
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name){
	this->grade = grade;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name) {
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	if (this != &obj)
		grade = obj.grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return("The grade is highest then 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return("The grade is lowest then 150");
}

std::string	Bureaucrat::getName() const {
	return (name);
}
int	Bureaucrat::getGrade() const {
	return (grade);
}

void	Bureaucrat::decrementGrade() {
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}
void	Bureaucrat::incrementGrade() {
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (os);
}

void	Bureaucrat::signForm(AForm & form) {
	try {
		form.beSigned(*this);
		if (form.getSign())
		std::cout << name << " signed " << form.getName() << std::endl;
	else
		std::cout << name << " coundn't sign " << form.getName() << " because the grade is lowest then " << form.getGradeToSign() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		std::cout << name << " coundn't sign " << form.getName() << " because the grade is lowest then " << form.getGradeToSign() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		std::cout << name << " couldn't execute " << form.getName() << " because the grade is lowest then " << form.getGradeToExec() << std::endl;
	}
}