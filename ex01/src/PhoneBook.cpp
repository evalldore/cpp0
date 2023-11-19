/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:28:41 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/18 22:51:37 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "phone book constructor" << std::endl;
	_index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "phone book destructor" << std::endl;
}

void	PhoneBook::add(const std::string &first, const std::string &second, const std::string &nick, const std::string &phone, const std::string &secret)
{
	_list[_index].Set_FirstName(first);
	_list[_index].Set_SecondName(second);
	_list[_index].Set_NickName(nick);
	_list[_index].Set_PhoneNumber(phone);
	_list[_index].Set_DarkSecret(secret);
	_index++;
	if (_index >= MAX_CONTACTS)
		_index = 0;
}

static std::string truncate(const std::string str)
{
	if (str.length() <= COLLUMN_WIDTH)
		return str;
	return str.substr(0, COLLUMN_WIDTH - 3) + "...";
}

void	PhoneBook::display()
{
	uint8_t	i;

	i = 0;
	std::cout << std::setw(COLLUMN_WIDTH) << std::left << "Index" << " | "
			<< std::setw(COLLUMN_WIDTH) << std::left << "Name" << " | "
			<< std::setw(COLLUMN_WIDTH) << std::left << "Last Name" << " | "
			<< std::setw(COLLUMN_WIDTH) << std::left << "Nick Name" << std::endl;
	while (i < MAX_CONTACTS)
	{
		std::cout << std::setw(COLLUMN_WIDTH) << std::left << (i + 1) << " | "
			<< std::setw(COLLUMN_WIDTH) << std::left << truncate(_list[i].Get_FirstName()) << " | "
			<< std::setw(COLLUMN_WIDTH) << std::left << truncate(_list[i].Get_SecondName()) << " | "
			<< std::setw(COLLUMN_WIDTH) << std::left << truncate(_list[i].Get_NickName()) << std::endl;
		i++;
	}
}

void	PhoneBook::search(uint8_t index)
{
	_list[index].Print();
}