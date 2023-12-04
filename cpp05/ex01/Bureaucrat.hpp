#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& obj);

	std::string	getName() const;
	int			getGrade() const;

	void	incrementGrade();
	void	decrementGrade();


	class GradeTooHighException : public std::exception{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			const char* what() const throw();
	};

	void	signForm(Form& f);

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif