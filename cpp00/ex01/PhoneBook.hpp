/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:26:49 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 15:54:59 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
# define PHONE_BOOK

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
	
	public:
		Contact contacts[8];
};

//save contacts functions
void	save_first_name(PhoneBook *phone_book, int index);
void	save_last_name(PhoneBook *phone_book, int index);
void	save_nick_name(PhoneBook *phone_book, int index);
void	save_phone_number(PhoneBook *phone_book, int index);
void	save_darkest_secret(PhoneBook *phone_book, int index);

//support functions
int		ft_isdigits(std::string str);
void	search_cmd(PhoneBook phone_book);
void	chose_index(PhoneBook phone_book);
int		check_index(PhoneBook phone_book, std::string str);
void	add_cmd(PhoneBook *phone_book, int *index);

//display functions
void	display_header_phone_book();
void	display_empty_columns();
void	display_columns(PhoneBook phone_book, int index);
void	display_saved_contacts(PhoneBook phone_book);
void	display_contact_information(PhoneBook phone_book, int index);

#endif