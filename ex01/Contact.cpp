/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:37:34 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/11 14:29:03 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

Contact::Contact(std::string FirstName, std::string LastName,
			std::string Nickname, std::string PhoneNumber, std::string DarkestSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->Nickname = Nickname;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
}

std::string Contact::getFirstName()
{
	return this->FirstName;
}

std::string	Contact::getLastName()
{
	return this->LastName;
}
std::string	Contact::getNickname()
{
	return this->Nickname;
}
std::string	Contact::getPhoneNumber()
{
	return this->PhoneNumber;
}
std::string	Contact::getDarkestSecret()
{
	return this->DarkestSecret;
}

int (Contact::getIndex(int index))
{
	if (index == this->index)
		return this->index;
	else
		return (0);
}

void (Contact::setIndex(int index))
{
	this->index = index;
}
