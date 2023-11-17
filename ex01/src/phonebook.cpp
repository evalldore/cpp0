/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:28:41 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 12:31:31 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "constructor" << std::endl;
	_index = 0;
	memset(&_list, 0, sizeof(_list));
}

Phonebook::~Phonebook()
{
	std::cout << "destructor" << std::endl;
}

void	Phonebook::add(Contact &cont)
{
	std::cout << "add" << std::endl;

	_list[_index].Set_FirstName(cont.Get_FirstName());
	_list[_index].Set_SecondName(cont.Get_SecondName());
	_list[_index].Set_NickName(cont.Get_NickName());
	_list[_index].Set_PhoneNumber(cont.Get_PhoneNumber());
	_list[_index].Set_DarkSecret(cont.Get_DarkSecret());
	_index++;
	if (_index >= MAX_CONTACTS)
		_index = 0;
}

void	Phonebook::search()
{
	std::cout << "search" << std::endl;
}
