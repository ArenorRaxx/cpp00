/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:30:13 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/27 13:55:22 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstring>

#ifndef CONTACT_HPP
# define CONTACT_HPP

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

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::FillContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

void Contact::DisplayAllInfo(void)
{
	std::cout << "No ." << this->index << "\n";
	std::cout << "First name :\t" << this->first_name << "\n";
	std::cout << "Last name :\t" << this->last_name << "\n";
	std::cout << "Nickname :\t" << this->nickname << "\n";
	std::cout << "Phone No :\t" << this->phone_number << "\n";
	std::cout << "Shhht... :\t" << this->darkest_secret << std::endl;
}

std::string	Contact::FormatInfo(std::string info)
{
	int			current_info_length;
	std::string	to_display;

	current_info_length = info.length();
	if (current_info_length > 10)
		return (info.substr(0, 9).append(1, '.'));
	return (info);
}

void Contact::DisplayFormatedInfo(void)
{
	std::cout << std::setw(10) << this->index;
	std::cout << "|";
	std::cout << std::setw(10) << Contact::FormatInfo(this->first_name);
	std::cout << "|";
	std::cout << std::setw(10) << Contact::FormatInfo(this->last_name);
	std::cout << "|";
	std::cout << std::setw(10) << Contact::FormatInfo(this->nickname);
	std::cout << "\n";
}

#endif