/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:06 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/16 17:53:49 by evallee-         ###   ########.fr       */
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
		void exit();
};
# endif