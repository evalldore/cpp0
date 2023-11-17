/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 11:46:37 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# include <iostream>
# include <cstring>

class Contact
{
	public:
		Contact() {};
		Contact(const std::string &first, const std::string &second, const std::string &nick, const std::string &phone, const std::string &secret): 
		_first_name(first),
		_second_name(second),
		_nick_name(nick),
		_phone_number(phone),
		_dark_secret(secret) {};
		~Contact() {};

		void Print(void);
	private :
		std::string _first_name;
		std::string _second_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _dark_secret;
};
# endif