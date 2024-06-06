/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:03:16 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/05 17:57:15 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
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
			std::cout << std::endl << "Un nabo" << std::endl;
		if (str == "SEARCH")
			std::cout << std::endl << "Otro nabo" << std::endl;
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
