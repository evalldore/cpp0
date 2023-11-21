/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:13:36 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/21 14:03:40 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "contact constructor" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "contact destructor" << std::endl;
}

void	Contact::print(void) const
{
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Second name: " << _secondName << std::endl;
	std::cout << "Nick name: " << _nickName << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Dark secret: " << _darkSecret << std::endl;
}

std::string Contact::getFirstName() const {return (_firstName);};
std::string Contact::getSecondName() const {return (_secondName);};
std::string Contact::getNickName() const {return (_nickName);};
std::string Contact::getPhoneNumber() const {return (_phoneNumber);};
std::string Contact::getDarkSecret() const {return (_darkSecret);};

void Contact::setFirstName(const std::string &str) {_firstName = str;};
void Contact::setSecondName(const std::string &str) {_secondName = str;};
void Contact::setNickName(const std::string &str) {_nickName = str;};
void Contact::setPhoneNumber(const std::string &str) {_phoneNumber = str;};
void Contact::setDarkSecret(const std::string &str) {_darkSecret = str;};