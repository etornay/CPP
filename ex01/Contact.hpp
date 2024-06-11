/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:36:36 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/11 14:24:39 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cstring>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
		int			index;
	
	public:
		Contact(void);
		Contact(std::string FirstName, std::string LastName,
			std::string Nickname, std::string PhoneNumber, std::string DarkestSecret);
		~Contact(void);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string getPhoneNumber();
		std::string	getDarkestSecret();
		int			getIndex(int index);
		void		setIndex(int index);
		void		add();
		void		search();
		void		exit();
};

#endif