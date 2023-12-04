#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	name;
		bool		sign;
		const int	gradeToSign;
		const int	gradeToExec;

	public:
		AForm();
		AForm( std::string name, int gradeToSign, int gradeToExec );
		virtual ~AForm();
		AForm(const AForm& copy);
		AForm& operator=(const AForm& obj);

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
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif