/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:23:31 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 15:24:17 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	add_cmd(PhoneBook *phone_book, int *index)
{
	phone_book->contacts[*index - 1].set_index(*index);
	save_first_name(phone_book, *index);
	save_last_name(phone_book, *index);
	save_nick_name(phone_book, *index);
	save_phone_number(phone_book, *index);
	save_darkest_secret(phone_book, *index);
	(*index)++;
	if (*index == 9)
		*index = 1;
}

int	check_index(PhoneBook phone_book, std::string str)
{
	long	index;
	char	*ptr;

	index = std::strtol(str.c_str(), &ptr, 10);
	if (*ptr != '\0' || index > 8 || index < 1)
	{
		std::cout << "!! Invalid index try again !!" << std::endl;
		return (0);
	}
	else if (phone_book.contacts[index - 1].get_first_name().empty())
	{
		std::cout << "!! this index is empty !!" << std::endl;
		return (1);
	}
	else
		display_contact_information(phone_book, index);
	return (1) ;
}

void	chose_index(PhoneBook phone_book)
{
	std::string	str;

	while (1)
	{
		std::cout << "Enter index between 1 and 8: ";
		if (!std::getline(std::cin, str))
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		if (!ft_isdigits(str))
			std::cout << "!! Wrong input enter a sequence of numbers !!" << std::endl;
		else if (check_index(phone_book, str))
			break;
	}
}

void	search_cmd(PhoneBook phone_book)
{
	display_saved_contacts(phone_book);
	chose_index(phone_book);
}

int	main()
{
	PhoneBook	phone_book;
	std::string	cmd;
	int			index;

	index = 1;
	while (1)
	{
		std::cout << "enter one of three commands: ADD | SEARCH | EXIT\n";
		if (!std::getline(std::cin, cmd))
		{
			std::cin.clear();
			clearerr(stdin);
		}
		if (!cmd.compare("ADD"))
			add_cmd(&phone_book, &index);
		else if (!cmd.compare("SEARCH"))
			search_cmd(phone_book);
		else if (!cmd.compare("EXIT"))
			exit (0);
	}
	return (0);
}
