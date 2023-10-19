/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:23:31 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/19 18:29:53 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "FunProto.h"

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
			exit (1);
		if (!cmd.compare("ADD"))
			phone_book.add_cmd(&index);
		else if (!cmd.compare("SEARCH"))
			phone_book.search_cmd();
		else if (!cmd.compare("EXIT"))
			exit (0);
	}
	return (0);
}
