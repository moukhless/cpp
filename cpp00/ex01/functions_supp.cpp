/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_supp.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:32:09 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 15:55:37 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	ft_isdigits(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	search_cmd(PhoneBook phone_book)
{
	display_saved_contacts(phone_book);
	chose_index(phone_book);
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
