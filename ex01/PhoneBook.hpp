/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:00:46 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/27 14:10:08 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::AddContact(Contact to_add)
{
	to_add.index = this->index % 8;
	storage[to_add.index] = to_add;
	this->index += 1;
}

void PhoneBook::DisplaySearchList(void)
{
	std::cout << "INDEX     FIRST_NAME LAST_NAME  NICKNAME   \n";
	for (int i = 0; i < 8 && i < this->index; i++)
		this->storage[i].DisplayFormatedInfo();
}

void PhoneBook::DisplayContactIndex(int index)
{
	if (index >= 0 && index < 8 && index < this->index)
		this->storage[index].DisplayAllInfo();
	else
		std::cout << "Please, input a valid index.\n";
}

#endif