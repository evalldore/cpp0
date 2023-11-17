/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:13:36 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 15:10:51 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact()
{
	std::cout << "contact constructor" << std::endl;
}

Contact::~Contact()
{
	std::cout << "contact destructor" << std::endl;
}

void	Contact::Print()
{
	std::cout << std::left << _first_name << std::endl
			<< std::left << _second_name << std::endl
			<< std::left << _nick_name << std::endl
			<< std::left << _phone_number << std::endl
			<< std::left << _dark_secret << std::endl;
}
