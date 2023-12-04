#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) {
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name){
	this->grade = grade;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
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