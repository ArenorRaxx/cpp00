/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:10:25 by mcorso            #+#    #+#             */
/*   Updated: 2023/01/31 16:12:17 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>

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