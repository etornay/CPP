/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:37:34 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/06 14:07:53 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
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
int	Contact::getPhoneNumber()
{
	return this->PhoneNumber;
}
std::string	Contact::getDarkestSecret()
{
	return this->DarkestSecret;
}