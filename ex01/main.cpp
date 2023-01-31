/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:35:08 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/27 14:08:22 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static int	create_new_contact(PhoneBook *my_phone);
static int	ft_stoi(std::string input);

int	main(void)
{
	int			index_to_read;
	PhoneBook	my_phone;
	std::string	read_buffer;

	Contact newcontact;

	newcontact.FillContact("a", "b", "c", "d", "e");
	for (int i = 0; i < 8; i++)
		my_phone.AddContact(newcontact);
	while (true)
	{
		std::cout << "myphonebook > ";
		std::getline(std::cin, read_buffer);
		if (std::cin.eof())
			return (1);
		if (read_buffer.data()[0] == 0)
			continue;
		if (read_buffer.compare("ADD") == 0)
		{
			if (create_new_contact(&my_phone) == -1)
				return (1);
			std::cout << "New contact has been created !\n";
			continue ;
		}
		if (read_buffer.compare("SEARCH") == 0)
		{
			std::cout << "Here are your contacts: \n\n";
			my_phone.DisplaySearchList();
			std::cout << "\nWhich one are you looking for ? (index): ";
			std::getline(std::cin, read_buffer);
			if (std::cin.eof())
				return (1);
			if ((index_to_read = ft_stoi(read_buffer)) == -1)
				std::cout << "Please, retry with a valid input\n";
			else
				my_phone.DisplayContactIndex(index_to_read);
			continue;
		}
		if (read_buffer.compare("EXIT") == 0)
			break ;
		std::cout << "myphonebook > " << read_buffer << ": invalid command.\n";
	}
	return (0);
}

static int	create_new_contact(PhoneBook *my_phone)
{
	int			i = 0;
	Contact		new_contact;
	std::string	prompt[5] = { "First name", "Last name", "Nickname", "Phone number", "Darkest secret" };
	std::string	contact_info[5];

	while (i < 5)
	{
		std::cout << prompt[i] << ": ";
		std::getline(std::cin, contact_info[i]);
		if (std::cin.eof())
			return (-1);
		if (contact_info[i].empty())
		{
			std::cout << "Every field of the new contact must be filled.\n";
			continue ;
		}
		i++;
	}
	new_contact.FillContact(contact_info[0], contact_info[1], contact_info[2], contact_info[3], contact_info[4]);
	(*my_phone).AddContact(new_contact);
	return (0);
}

static int	ft_stoi(std::string input)
{
	int			i = 0;
	int			ret = 0;
	const char	*input_data;

	input_data = input.data();
	while (input_data[i] != '\0')
	{
		if (std::isdigit(input_data[i]) == false)
			return (-1);
		ret *= 10;
		ret += input_data[i] - 48;
		i++;
	}
	return (ret);
}
