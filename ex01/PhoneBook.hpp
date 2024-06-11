/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:24:29 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/11 19:07:51 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdlib>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
		
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact getContact(int index);
		void	addContact(void);
		void	searchContact(void);
		bool	isDigit(std::string str);
};

#endif