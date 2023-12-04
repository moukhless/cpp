/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:41:46 by amoukhle          #+#    #+#             */
/*   Updated: 2023/12/04 15:59:09 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SHRUBBERYCREATIONFORM_HPP
#define  SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class  ShrubberyCreationForm : public AForm{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const  ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const  ShrubberyCreationForm& obj);

		void	execute(Bureaucrat const & executor) const;
};

#endif