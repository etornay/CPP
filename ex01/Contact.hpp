/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:36:36 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/06 14:03:55 by etornay-         ###   ########.fr       */
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
		int			PhoneNumber;
		std::string DarkestSecret;
	
	public:
		Contact(void);
		~Contact(void);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		int			getPhoneNumber();
		std::string	getDarkestSecret();
		void		add();
		void		search();
		void		exit();
};

#endif