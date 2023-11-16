/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/16 18:05:21 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# include <iostream>
# include <cstring>

class Contact
{
	public:
		Contact(const std::string &name): name(name) {};
		~Contact();
	private :
		std::string name;
};
# endif