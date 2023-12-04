#include "Form.hpp"

Form::Form() : name("default"), gradeToSign(10), gradeToExec(20) {
	sign = false;
	if (gradeToExec > 150 || gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExec < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
}

Form::Form( std::string name, bool sign, int gradeToSign, int gradeToExec ) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec){
	this->sign = sign;
	if (gradeToExec > 150 || gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExec < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
}

Form::~Form() {
}

Form::Form(const Form& copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec) {
	*this = copy;
}

Form& Form::operator=(const Form& obj) {
	if (this != &obj)
		sign = obj.sign;
	return (*this);
}

std::string	Form::getName() const {
	return (name);
}

bool		Form::getSign() const {
	return (sign);
}

int			Form::getGradeToSign() const {
	return (gradeToSign);
}

int			Form::getGradeToExec() const {
	return (gradeToExec);
}

const char* Form::GradeTooHighException::what() const throw() {
	return("The grade is highest then 1");
}

const char* Form::GradeTooLowException::what() const throw() {
	return("The grade is lowest then 150");
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	os << obj.getName() << ", Form grade to sign it" << obj.getGradeToSign() << ", Form grade to execute it" << obj.getGradeToExec();
	if (obj.getSign())
		os << "the form is signed" << std::endl;
	else
		os << "the form is not signed" << std::endl;
	return (os);
}

void	Form::beSigned(Bureaucrat b) {
	if (b.getGrade() <= gradeToSign)
		sign = true;
	else
		throw GradeTooLowException();
}