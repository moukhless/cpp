#include "AForm.hpp"

AForm::AForm() : name("default_form"), gradeToSign(10), gradeToExec(20) {
	sign = false;
}

AForm::AForm( std::string name, int gradeToSign, int gradeToExec ) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec){
	this->sign = false;
	if (gradeToExec > 150 || gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToExec < 1 || gradeToSign < 1)
		throw AForm::GradeTooHighException();
}

AForm::~AForm() {
}

AForm::AForm(const AForm& copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec) {
	*this = copy;
}

AForm& AForm::operator=(const AForm& obj) {
	if (this != &obj)
		sign = obj.sign;
	return (*this);
}

std::string	AForm::getName() const {
	return (name);
}

bool		AForm::getSign() const {
	return (sign);
}

int			AForm::getGradeToSign() const {
	return (gradeToSign);
}

int			AForm::getGradeToExec() const {
	return (gradeToExec);
}

const char* AForm::GradeTooHighException::what() const throw() {
	return("The grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return("The grade is too low");
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
	os << obj.getName() << ", AForm grade to sign it" << obj.getGradeToSign() << ", AForm grade to execute it" << obj.getGradeToExec();
	if (obj.getSign())
		os << "the Aform is signed" << std::endl;
	else
		os << "the Aform is not signed" << std::endl;
	return (os);
}

void	AForm::beSigned(Bureaucrat& b) {
	if (b.getGrade() <= gradeToSign)
		sign = true;
	else
		throw GradeTooLowException();
}