/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_contacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:17:30 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 14:00:50 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	save_first_name(PhoneBook *phone_book, int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "First Name: ";
		if (!std::getline(std::cin, str))
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
	}
	phone_book->contacts[index - 1].set_first_name(str);
}

void	save_last_name(PhoneBook *phone_book, int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "Last Name: ";
		if (!std::getline(std::cin, str))
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
	}
	phone_book->contacts[index - 1].set_last_name(str);
}

void	save_nick_name(PhoneBook *phone_book, int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "Nick Name: ";
		if (!std::getline(std::cin, str))
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
	}
	phone_book->contacts[index - 1].set_nick_name(str);
}

void	save_phone_number(PhoneBook *phone_book, int index)
{
	std::string	str;

	while (str.empty() || !ft_isdigits(str))
	{
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, str))
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		if (!ft_isdigits(str))
			std::cout << "!! Wrong input enter a sequence of numbers !!" << std::endl;
	}
	phone_book->contacts[index - 1].set_phone_number(str);
}

void	save_darkest_secret(PhoneBook *phone_book, int index)
{
	std::string	str;

	while (str.empty())
	{
		std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, str))
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
	}
	phone_book->contacts[index - 1].set_darkest_secret(str);
}
