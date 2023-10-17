/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_functions.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:39:47 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 15:09:57 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	display_header_phone_book()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nick name" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	display_empty_columns()
{
	std::cout << "|" << std::setw(10) << "";
	std::cout << "|" << std::setw(10) << "";
	std::cout << "|" << std::setw(10) << "";
	std::cout << "|" << std::setw(10) << "" << "|" << std::endl;
}

void	display_columns(PhoneBook phone_book, int index)
{
	std::string	str;

	std::cout << "|" << "         " << phone_book.contacts[index - 1].get_index() ;
	str = phone_book.contacts[index - 1].get_first_name();
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
	str = phone_book.contacts[index - 1].get_last_name();
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
	str = phone_book.contacts[index - 1].get_nick_name();
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".|" << std::endl;
	else
	{
		std::cout << "|" << std::setw(10) << str;
		std::cout << "|" << std::endl;
	}
}

void	display_saved_contacts(PhoneBook phone_book)
{
	int	i;

	i = 0;
	display_header_phone_book();
	while (i < 8)
	{
		if (!phone_book.contacts[i].get_first_name().empty())
			display_columns(phone_book, i + 1);
		else
			display_empty_columns();
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	display_contact_information(PhoneBook phone_book, int index)
{
	std::cout << "First name: " << phone_book.contacts[index - 1].get_first_name() << std::endl;
	std::cout << "Last name: " << phone_book.contacts[index - 1].get_last_name() << std::endl;
	std::cout << "Nick name: " << phone_book.contacts[index - 1].get_nick_name() << std::endl;
	std::cout << "Phone number: " << phone_book.contacts[index - 1].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << phone_book.contacts[index - 1].get_darkest_secret() << std::endl;
}
