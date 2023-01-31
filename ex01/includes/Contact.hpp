/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:30:13 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 14: by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string	FormatInfo(std::string info);
	
	public:
		int         index;
		Contact();
		~Contact();
		void DisplayAllInfo(void);
		void DisplayFormatedInfo(void);
		void FillContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
};

#endif