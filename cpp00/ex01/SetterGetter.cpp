/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SetterGetter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:10:33 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/22 14:37:51 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::get_first_name()
{
	return (FirstName);
}
void Contact::set_first_name(std::string FirstName)
{
	this->FirstName = FirstName;
}

std::string Contact::get_last_name()
{
	return (LastName);
}
void Contact::set_last_name(std::string LastName)
{
	this->LastName = LastName;
}

std::string Contact::get_nick_name()
{
	return (NickName);
}
void Contact::set_nick_name(std::string NickName)
{
	this->NickName = NickName;
}

std::string Contact::get_phone_number()
{
	return (PhoneNumber);
}
void Contact::set_phone_number(std::string PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}

std::string Contact::get_darkest_secret()
{
	return (DarkestSecret);
}
void Contact::set_darkest_secret(std::string DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}

int Contact::get_index()
{
	return (Index);
}
void Contact::set_index(int Index)
{
	this->Index = Index;
}
