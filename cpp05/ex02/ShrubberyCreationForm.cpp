#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm( "default_Shrubberyform", 145, 137 ), target("default_target") {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( target, 145, 137 ) {
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
	if (executor.getGrade() > 137)
		throw GradeTooLowException();
	if (!getSign())
		throw IsNotSigned();
	std::ofstream	file;
	std::string		fileName = target + "_shrubbery";
	file.open(fileName);
	if (!file.is_open()) {
		std::cout << "Unable to open " << fileName << " !!" << std::endl;
		exit (1);
	}
	file << "                      ___" << std::endl;
	file << "                _,-\'\"\"   \"\"\"\"`--." << std::endl;
	file << "             ,-'          __,,-- " << std::endl;
	file << "           ,'    __,--\"\"\"\"dF      )" << std::endl;
	file << "          /   .-\"Hb_,--\"\"dF      " << std::endl;
	file << "        ,'       _Hb ___dF\"-._,-\'" << std::endl;
	file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
	file << "     (     ,-'                  `." << std::endl;
	file << "      `._,'     _   _             ;" << std::endl;
	file << "       ,\'     ,\' `-\'Hb-.___..._,-\'" << std::endl;
	file << "       \\    ,\'\"Hb.-\'HH`-.dHF\"" << std::endl;
	file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
	file << "                \"Hb HH dF" << std::endl;
	file << "                 \"HbHHdF" << std::endl;
	file << "                  |HHHF" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  dHHHb" << std::endl;
	file << "                .dFd|bHb.               o" << std::endl;
	file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
	file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
	file << "##########################################" << std::endl;
	file.close();
}