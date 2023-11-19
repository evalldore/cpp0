/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:06 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/18 22:32:48 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iomanip>
#include <stdint.h>
#include "Contact.hpp"
#define MAX_CONTACTS 8
#define COLLUMN_WIDTH 10

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add(const std::string &first, const std::string &second, const std::string &nick, const std::string &phone, const std::string &secret);
		void	search(uint8_t index);
		void	display();
	private:
		Contact _list[MAX_CONTACTS];
		uint8_t	_index;
};