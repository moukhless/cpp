/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:28:30 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/22 14:44:39 by amoukhle         ###   ########.fr       */
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

		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nick_name();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
		int			get_index();

		void		set_first_name(std::string FirstName);
		void		set_last_name(std::string LastName);
		void		set_nick_name(std::string NickName);
		void		set_phone_number(std::string PhoneNumber);
		void		set_darkest_secret(std::string DarkestSecret);
		void		set_index(int Index);

};

#endif