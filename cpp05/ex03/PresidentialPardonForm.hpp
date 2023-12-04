/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:41:46 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/02 10:58:40 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( std::string target , std::string name, bool sign, int gradeToSign, int gradeToExec );
		~PresidentialPardonForm();
		PresidentialPardonForm(const  PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(const  PresidentialPardonForm& obj);

		void	execute(Bureaucrat const & executor) const;
};

#endif