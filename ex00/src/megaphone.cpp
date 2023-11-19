/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:51:07 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/18 20:11:17 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	size_t	i;
	std::string arg;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	argv++;
	while (*argv)
	{
		i = 0;
		arg = *argv;
		while (arg[i])
		{
			arg[i] = toupper(arg[i]);
			i++;
		}
		std::cout << arg;
		argv++;
	}
	std::cout << '\n';
	return (0);
}
