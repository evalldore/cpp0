/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:06 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 15:10:55 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iomanip>
#include "contact.hpp"
#define MAX_CONTACTS 8
#define COLLUMN_WIDTH 10

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		void	add(const std::string &first, const std::string &second, const std::string &nick, const std::string &phone, const std::string &secret);
		void	search(uint8_t index);
		void	display();
	private:
		Contact _list[MAX_CONTACTS];
		uint8_t	_index;
};