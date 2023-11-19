/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/18 22:38:19 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>

class Contact
{
	public:
		Contact();
		~Contact();

		std::string Get_FirstName() const {return (_firstName);};
		std::string Get_SecondName() const {return (_secondName);};
		std::string Get_NickName() const {return (_nickName);};
		std::string Get_PhoneNumber() const {return (_phoneNumber);};
		std::string Get_DarkSecret() const {return (_darkSecret);};

		void Set_FirstName(const std::string &str) {_firstName = str;};
		void Set_SecondName(const std::string &str) {_secondName = str;};
		void Set_NickName(const std::string &str) {_nickName = str;};
		void Set_PhoneNumber(const std::string &str) {_phoneNumber = str;};
		void Set_DarkSecret(const std::string &str) {_darkSecret = str;};
		void Print(void);
	private :
		std::string _firstName;
		std::string _secondName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkSecret;
};
