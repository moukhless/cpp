/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:23:31 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 15:55:05 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
