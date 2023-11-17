/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:06 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 12:32:57 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "contact.hpp"
#define MAX_CONTACTS 8

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void add(Contact &cont);
		void search();
	private:
		Contact _list[MAX_CONTACTS];
		uint8_t	_index;
};