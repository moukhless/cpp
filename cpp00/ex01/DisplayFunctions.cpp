/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayFunctions.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:39:47 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/19 18:33:37 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "FunProto.h"

void	PhoneBook::display_header_phone_book()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nick name" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::display_empty_columns()
{
	std::cout << "|" << std::setw(10) << "";
	std::cout << "|" << std::setw(10) << "";
	std::cout << "|" << std::setw(10) << "";
	std::cout << "|" << std::setw(10) << "" << "|" << std::endl;
}

void	PhoneBook::display_columns(int index)
{
	std::string	str;

	std::cout << "|" << std::setw(10) << contacts[index - 1].get_index() ;
	str = contacts[index - 1].get_first_name();
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
	str = contacts[index - 1].get_last_name();
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
	str = contacts[index - 1].get_nick_name();
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".|" << std::endl;
	else
	{
		std::cout << "|" << std::setw(10) << str;
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::display_saved_contacts()
{
	int	i;

	i = 0;
	display_header_phone_book();
	while (i < 8)
	{
		if (!contacts[i].get_first_name().empty())
			display_columns(i + 1);
		else
			display_empty_columns();
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::display_contact_information(int index)
{
	std::cout << "First name: " << contacts[index - 1].get_first_name() << std::endl;
	std::cout << "Last name: " << contacts[index - 1].get_last_name() << std::endl;
	std::cout << "Nick name: " << contacts[index - 1].get_nick_name() << std::endl;
	std::cout << "Phone number: " << contacts[index - 1].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contacts[index - 1].get_darkest_secret() << std::endl;
}
