/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:35:29 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/20 22:38:46 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <cstdlib>
#include "PhoneBook.hpp"

static void add(PhoneBook &book)
{
	std::string	first_name;
	std::string	second_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	dark_secret;

	std::cout << "Enter first name > ";
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		exit(1);
	std::cout << "Enter second name > ";
	std::getline(std::cin, second_name);
	if (std::cin.eof())
		exit(1);
	std::cout << "Enter nick name > ";
	std::getline(std::cin, nick_name);
	if (std::cin.eof())
		exit(1);
	std::cout << "Enter phone number > ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		exit(1);
	std::cout << "Enter deep dark secret > ";
	std::getline(std::cin, dark_secret);
	if (std::cin.eof())
		exit(1);
	if (!first_name.empty() && !second_name.empty() && !nick_name.empty() && !phone_number.empty() && !dark_secret.empty())
		book.add(first_name, second_name, nick_name, phone_number, dark_secret);
	else
		std::cout << "Invalid parameters for contact!" << std::endl;
}

static bool is_number(const std::string& str) {
	if (!str[0]) return false;
	for (size_t i = 0; i < str.length(); ++i)
		if (!isdigit(str[i])) return false;
	return true;
}

static void search(PhoneBook &book)
{
	std::string index_str;
	uint8_t		index;

	book.display();
	std::cout << "Enter contact index > ";
	std::getline(std::cin, index_str);
	if (std::cin.eof())
		exit(1);
	if (!is_number(index_str))
	{
		std::cout << "Index must be a number!" << std::endl;
		return ;
	}
	index = uint8_t(atoi(index_str.c_str()));
	if (index > 0 && index <= MAX_CONTACTS)
		book.search(index - 1);
	else
		std::cout << "Index invalid (must be 1-8)!" << std::endl;
}

static bool	command(PhoneBook &book, std::string &input)
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (input == "ADD")
		add(book);
	else if (input == "SEARCH")
		search(book);
	else if (input == "EXIT")
		return (false);
	else
		std::cout << input << " is an invalid command!" << std::endl;
	return (true);
}

int	main(void)
{
	PhoneBook	book;
	std::string	input;
	
	while (true)
	{
		std::cout << "Enter a command > ";
		std::cin >> input;
		if (std::cin.eof())
			return (1);
		if (!command(book, input))
			break;
	}
}
