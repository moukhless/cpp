/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:28:30 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/17 11:34:15 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT

#include <iostream>

class Contact {

	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
		int			Index;
	
	public:
		std::string get_first_name()
		{
			return (FirstName);
		}
		void set_first_name(std::string FirstName)
		{
			this->FirstName = FirstName;
		}
		
		std::string get_last_name()
		{
			return (LastName);
		}
		void set_last_name(std::string LastName)
		{
			this->LastName = LastName;
		}

		std::string get_nick_name()
		{
			return (NickName);
		}
		void set_nick_name(std::string NickName)
		{
			this->NickName = NickName;
		}

		std::string get_phone_number()
		{
			return (PhoneNumber);
		}
		void set_phone_number(std::string PhoneNumber)
		{
			this->PhoneNumber = PhoneNumber;
		}
		
		std::string get_darkest_secret()
		{
			return (DarkestSecret);
		}
		void set_darkest_secret(std::string DarkestSecret)
		{
			this->DarkestSecret = DarkestSecret;
		}

		int get_index()
		{
			return (Index);
		}
		void set_index(int Index)
		{
			this->Index = Index;
		}
};

#endif