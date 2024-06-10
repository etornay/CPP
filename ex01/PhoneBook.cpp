/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:30:29 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/10 16:48:41 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(void)
{
	std::string first;
	std::string last;
	std::string nickname;
	std::string phone;
	std::string secret;

	if (this->index >= 8)
	{
		std::cout << "You will delete " << this->contacts[this->index % 8].getFirstName() << ", continue to execute it." << std::endl;
	}
	while (first.empty())
	{
		if (std::cin.eof())
		{
			std::cout << "Enter first name: ";
			std::getline(std::cin, first);
		}
	}
	while (last.empty())
	{
		if (std::cin.eof())
		{
			std::cout << "Enter last name: ";
			std::getline(std::cin, last);
		}
	}
	while (nickname.empty())
	{
		if (std::cin.eof())
		{
			std::cout << "Enter nickname: ";
			std::getline(std::cin, nickname);
		}
	}
	while (phone.empty())
	{
		if (std::cin.eof())
		{
			std::cout << "Enter phone number: ";
			std::getline(std::cin, phone);
		}
	}
	while (secret.empty())
	{
		if (std::cin.eof())
		{
			std::cout << "Enter the darkest secret: ";
			std::getline(std::cin, secret);
		}
	}
	std::cout << std::endl;
	this->contacts[this->index % 8] = Contact(first, last, nickname, phone, secret);
	this->contacts[this->index % 8].setIndex((this->index % 8) + 1);
	this->index++;
}

void	PhoneBook::searchContact(void)
{
	std::string str;
	size_t		len;
	int			index;

	if (index >= 8)
		index = 8;
	else
		index = this->index % 8;
	std::cout << " -------------------------------------------";
	std::cout << "| INDEX | FIRST NAME | LAST NAME | NICKNAME |";
	std::cout << " -------------------------------------------";
	for (int i = 0; i < index; i++)
	{
		std::cout << "|" << this->contacts[i].getIndex(i + 1);
		for (int j = 1; j < 10; j++)
			std::cout << " ";
		std::cout << "|";
		if (len = this->contacts[i].getFirstName().length() > 10)
		{
			str = this->contacts[i].getFirstName().substr(0,9);
			std::cout << str << ".|";
		}
		
	}
	
	
}

bool	PhoneBook::isDigit(std::string str)
{
	
}

Contact	PhoneBook::getContact(int index)
{
	return this->contacts[index];
}
