/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FunctionsSupp.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:32:09 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/19 18:31:43 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "FunProto.h"

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

void	PhoneBook::search_cmd()
{
	display_saved_contacts();
	chose_index();
}

void	PhoneBook::chose_index()
{
	std::string	str;

	while (1)
	{
		std::cout << "Enter index between 1 and 8: ";
		if (!std::getline(std::cin, str))
			exit (1);
		if (!ft_isdigits(str))
			std::cout << "!! Wrong input enter a sequence of numbers !!" << std::endl;
		else if (check_index(str))
			break;
	}
}

int	PhoneBook::check_index(std::string str)
{
	long	index;
	char	*ptr;

	index = std::strtol(str.c_str(), &ptr, 10);
	if (*ptr != '\0' || index > 8 || index < 1)
	{
		std::cout << "!! Invalid index try again !!" << std::endl;
		return (0);
	}
	else if (contacts[index - 1].get_first_name().empty())
	{
		std::cout << "!! this index is empty !!" << std::endl;
		return (1);
	}
	else
		display_contact_information(index);
	return (1) ;
}

void	PhoneBook::add_cmd(int *index)
{
	contacts[*index - 1].set_index(*index);
	save_first_name(*index);
	save_last_name(*index);
	save_nick_name(*index);
	save_phone_number(*index);
	save_darkest_secret(*index);
	(*index)++;
	if (*index == 9)
		*index = 1;
}
