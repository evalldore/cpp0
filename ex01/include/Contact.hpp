/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/21 00:34:16 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string getFirstName() const;
		std::string getSecondName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkSecret() const;

		void setFirstName(const std::string &str);
		void setSecondName(const std::string &str);
		void setNickName(const std::string &str);
		void setPhoneNumber(const std::string &str);
		void setDarkSecret(const std::string &str);
		void print(void) const;
	private :
		std::string _firstName;
		std::string _secondName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkSecret;
};
