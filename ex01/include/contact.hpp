/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 12:55:56 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>

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

		std::string Get_FirstName() const {return (_first_name);};
		std::string Get_SecondName() const {return (_second_name);};
		std::string Get_NickName() const {return (_nick_name);};
		std::string Get_PhoneNumber() const {return (_phone_number);};
		std::string Get_DarkSecret() const {return (_dark_secret);};

		void Set_FirstName(const std::string &str) {_first_name = str;};
		void Set_SecondName(const std::string &str) {_second_name = str;};
		void Set_NickName(const std::string &str) {_nick_name = str;};
		void Set_PhoneNumber(const std::string &str) {_phone_number = str;};
		void Set_DarkSecret(const std::string &str) {_dark_secret = str;};
		void Print(void);
	private :
		std::string _first_name;
		std::string _second_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _dark_secret;
};
