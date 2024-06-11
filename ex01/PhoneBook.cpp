/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:30:29 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/11 19:32:15 by etornay-         ###   ########.fr       */
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
			break;
		std::cout << std::endl << "Enter first name: ";
		std::getline(std::cin, first);
	}
	while (last.empty())
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter last name: ";
		std::getline(std::cin, last);
	}
	while (nickname.empty())
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickname);
	}
	while (phone.empty())
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phone);
	}
	while (secret.empty())
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter the darkest secret: ";
		std::getline(std::cin, secret);
	}
	std::cout << std::endl << "* Returning to Phonebook...*" << std::endl;
	this->contacts[this->index % 8] = Contact(first, last, nickname, phone, secret);
	this->contacts[this->index % 8].setIndex((this->index % 8) + 1);
	this->index++;
}

void	PhoneBook::searchContact(void)
{
	std::string str;
	size_t		len;
	int			index = 0;
	Contact		c;

	if (index >= 8)
		index = 8;
	else
		index = this->index % 8;
	std::cout << std::endl << "·-------------------------------------------·" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "·-------------------------------------------·" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "|";
    	int contactIndex = this->contacts[i].getIndex(i + 1);
    	int digits = 1;
   		while (contactIndex /= 10) digits++;
		for (int j = digits; j < 10; j++)
       		std::cout << " ";
		std::cout << this->contacts[i].getIndex(i + 1) << "|";
		if ((len = this->contacts[i].getFirstName().length()) > 10)
		{
			str = this->contacts[i].getFirstName().substr(0,9);
			std::cout << str << ".|";
		}
		else if (len < 10)
    	{
			for (size_t j = 0; j < (10 - len); j++)
        		std::cout << " ";
        	std::cout << this->contacts[i].getFirstName() << "|";
    	}
		if ((len = this->contacts[i].getLastName().length()) > 10)
		{
			str = this->contacts[i].getLastName().substr(0,9);
			std::cout << str << ".|";
		}
		else if (len < 10)
    	{
			for (size_t j = 0; j < (10 - len); j++)
        		std::cout << " ";
        	std::cout << this->contacts[i].getLastName() << "|";
    	}
		if ((len = this->contacts[i].getNickname().length()) > 10)
		{
			str = this->contacts[i].getNickname().substr(0,9);
			std::cout << str << ".|";
		}
		else if (len < 10)
    	{
			for (size_t j = 0; j < (10 - len); j++)
        		std::cout << " ";
        	std::cout << this->contacts[i].getNickname() << "|";
    	}
		std::cout << std::endl << "·-------------------------------------------·" << std::endl;
	}
	str = "";
	while (str.empty())
	{
		if (std::cin.eof())
			break;
		std::cout << "Introduce an Index to obtain contact information: ";
		std::getline(std::cin, str);
		std::cout << std::endl;
		if (str != "" && this->isDigit(str))
		{
			for (int i = 0; i < index; i++)
				if (this->contacts[i].getIndex(std::atoi(str.c_str())))
					c = this->getContact(i);
		}
		if (!this->isDigit(str) || !c.getIndex(std::atoi(str.c_str())))
		{
			if (!this->isDigit(str))
				std::cout << "Only numbers allowed. Please insert numbers to access the search." << std::endl;
			else
				std::cout << "Index not found." << std::endl;
			std::cout << std::endl << "* Returning to Phonebook...*" << std::endl;
			break;
		}
		else
		{
			std::cout << "Showing information from index number <" << c.getIndex(std::atoi(str.c_str())) << ">" << std::endl << std::endl;
			std::cout << "- First Name: " << c.getFirstName() << std::endl;
			std::cout << "- Last Name: " << c.getLastName() << std::endl;
			std::cout << "- Nickname: " << c.getNickname() << std::endl;
			std::cout << "- Phone Number: " << c.getPhoneNumber() << std::endl;
			std::cout << "- Darkest Secret: " << c.getDarkestSecret() << std::endl;
			std::cout << std::endl << "* Returning to Phonebook...*" << std::endl;
		}
	}
}

bool	PhoneBook::isDigit(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

Contact	PhoneBook::getContact(int index)
{
	return this->contacts[index];
}
