#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm( "default_Shrubberyform", 145, 137 ), target("default_target") {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target , std::string name, int gradeToSign, int gradeToExec ) : AForm( name, gradeToSign, gradeToExec ), target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( "default_Shrubberyform", 145, 137 ) {
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) {
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	if (this != &obj)
		target = obj.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > 150 || !getSign() || executor.getGrade() > 137)
		throw GradeTooLowException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();
	std::ofstream	file;
	std::string		fileName = target + "_shrubbery";
	file.open(fileName);
	if (!file.is_open()) {
		std::cout << "Unable to open " << fileName << " !!" << std::endl;
		exit (1);
	}
	file << "   ^   \n";
	file << "  ^^^  \n";
	file << " ^^^^^ \n";
	file << "^^^^^^^\n";
	file.close();
}