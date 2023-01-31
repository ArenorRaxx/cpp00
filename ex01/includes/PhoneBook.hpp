/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:00:46 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 16:11:41 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int		index;
		Contact storage[8];		
	public:
		PhoneBook();
		~PhoneBook();
		void AddContact(Contact to_add);
		void DisplaySearchList(void);
		void DisplayContactIndex(int index);
};

#endif