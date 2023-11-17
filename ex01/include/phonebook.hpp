/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:06 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 11:30:00 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# include "contact.hpp"
# define MAX_CONTACTS 8

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void add();
		void search();
	private:
		Contact List[MAX_CONTACTS];
};
# endif