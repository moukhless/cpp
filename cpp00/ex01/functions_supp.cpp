/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_supp.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:32:09 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 11:58:07 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	initial_index(PhoneBook *phone_book)
{
	int	i;
	
	i = 0;
	while (i < 8)
	{
		phone_book->contacts[i].set_index(-1);
		i++;
	}
}
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
