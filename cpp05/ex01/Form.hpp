#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool		sign;
		const int	gradeToSign;
		const int	gradeToExec;

	public:
		Form();
		Form( std::string name, int gradeToSign, int gradeToExec );
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& obj);

		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};

		std::string	getName() const;
		bool		getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		void	beSigned(Bureaucrat& b);

};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif