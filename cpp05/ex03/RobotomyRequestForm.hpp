/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:41:46 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/04 16:53:36 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string	target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( std::string target , std::string name, int gradeToSign, int gradeToExec );
		~RobotomyRequestForm();
		RobotomyRequestForm(const  RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const  RobotomyRequestForm& obj);

		void	execute(Bureaucrat const & executor) const;
};

#endif