/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:13:36 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/18 22:41:10 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

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
	std::cout << std::left << _firstName << std::endl
			<< std::left << _secondName << std::endl
			<< std::left << _nickName << std::endl
			<< std::left << _phoneNumber << std::endl
			<< std::left << _darkSecret << std::endl;
}
