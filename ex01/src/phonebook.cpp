/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:28:41 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 11:09:32 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "constructor\n";
}

Phonebook::~Phonebook()
{
	std::cout << "destructor\n";
}

void	Phonebook::add()
{
	std::cout << "add\n";
}

void	Phonebook::search()
{
	std::cout << "search\n";
}
