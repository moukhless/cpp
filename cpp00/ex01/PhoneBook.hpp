/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:26:49 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 15:06:36 by amoukhle         ###   ########.fr       */
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
void	initial_index(PhoneBook *phone_book);
int		ft_isdigits(std::string str);

//display functions
void	display_header_phone_book();
void	display_empty_columns();
void	display_columns(PhoneBook phone_book, int index);
void	display_saved_contacts(PhoneBook phone_book);
void	display_contact_information(PhoneBook phone_book, int index);

#endif