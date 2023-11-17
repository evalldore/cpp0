/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:35:29 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 11:53:28 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include "phonebook.hpp"

static void add(Phonebook &book)
{
	(void)book;
	std::string	first_name;
	std::string	second_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	dark_secret;

	std::cout << "Enter first name > ";
	std::getline(std::cin, first_name);

	std::cout << "Enter second name > ";
	std::getline(std::cin, second_name);

	std::cout << "Enter nick name > ";
	std::getline(std::cin, nick_name);

	std::cout << "Enter phone number > ";
	std::getline(std::cin, phone_number);

	std::cout << "Enter deep dark secret > ";
	std::getline(std::cin, dark_secret);

	Contact cont(first_name, second_name, nick_name, phone_number, dark_secret);

	cont.Print();
}

static void search(Phonebook &book)
{
	(void)book;
}

static bool	command(Phonebook &book, std::string &input)
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
		std::cout << input << " is an invalid command" << std::endl;
	return (true);
}

int	main(void)
{
	Phonebook	book;
	std::string	input;
	
	while (true)
	{
		std::cout << "Enter a command > ";
		std::cin >> input;
		if (!command(book, input))
			break;
	}
}
