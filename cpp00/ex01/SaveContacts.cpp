/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SaveContacts.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:17:30 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/19 18:18:54 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "FunProto.h"

void	PhoneBook::save_first_name(int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "First Name: ";
		if (!std::getline(std::cin, str))
			exit (1);
	}
	contacts[index - 1].set_first_name(str);
}

void	PhoneBook::save_last_name(int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "Last Name: ";
		if (!std::getline(std::cin, str))
			exit (1);
	}
	contacts[index - 1].set_last_name(str);
}

void	PhoneBook::save_nick_name(int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "Nick Name: ";
		if (!std::getline(std::cin, str))
			exit (1);
	}
	contacts[index - 1].set_nick_name(str);
}

void	PhoneBook::save_phone_number(int index)
{
	std::string	str;

	while (str.empty() || !ft_isdigits(str))
	{
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, str))
			exit (1);
		if (!ft_isdigits(str))
			std::cout << "!! Wrong input enter a sequence of numbers !!" << std::endl;
	}
	contacts[index - 1].set_phone_number(str);
}

void	PhoneBook::save_darkest_secret(int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, str))
			exit (1);
	}
	contacts[index - 1].set_darkest_secret(str);
}
