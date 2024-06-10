/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:03:16 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/10 14:38:09 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string str;

	while (str != "EXIT")
	{
		std::cout << std::endl;
		std::cout << "·-------------------------------·" << std::endl;
		std::cout << "| * WELCOME TO YOUR PHONEBOOK * |" << std::endl;
		std::cout << "|  ---------------------------  |" << std::endl;
		std::cout << "| Please, enter an option:      |" << std::endl;
		std::cout << "|  - ADD                        |" << std::endl;
		std::cout << "|  - SEARCH                     |" << std::endl;
		std::cout << "|                         EXIT  |" << std::endl;
		std::cout << "·-------------------------------·" << std::endl;
		std::getline(std::cin, str);
		for (int i = 0; i < (int)str.length(); i++)
			str[i] = std::toupper(str[i]);
		if (str == "ADD")
			phonebook.addContact();
		if (str == "SEARCH")
			phonebook.searchContact();
		if (str == "EXIT")
		{
			std::cout << std::endl << "Thx for using Phonebook!" << std::endl << std::endl;
			break;
		}
		if (std::cin.eof())
		{
			std::cout << std::endl << "Thx for using Phonebook!" << std::endl << std::endl;
			break;
		}
	}
	return 0;
}
