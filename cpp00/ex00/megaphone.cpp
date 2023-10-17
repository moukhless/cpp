/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:07:16 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/16 22:25:51 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int			i;
	int			j;
	std::string	str;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[i])
		{
			str = argv[i];
			j = 0;
			while (str[j])
			{
				std::cout << (char)toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
