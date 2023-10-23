/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:26:49 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/22 14:48:21 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
# define PHONE_BOOK

# include "Contact.hpp"
# include <iomanip>
# include <cstdlib>
# include <string>

class PhoneBook {
	
	private:

		Contact	contacts[8];

	public:

		void	save_first_name(int index);
		void	save_last_name(int index);
		void	save_nick_name(int index);
		void	save_phone_number(int index);
		void	save_darkest_secret(int index);

		void	display_header_phone_book();
		void	display_empty_columns();
		void	display_columns(int index);
		void	display_saved_contacts();
		void	display_contact_information(int index);

		void	search_cmd();
		void	add_cmd(int *index);
		void	chose_index();
		int		check_index(std::string str);

};

#endif