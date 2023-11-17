/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:51:07 by evallee-          #+#    #+#             */
/*   Updated: 2023/11/17 11:12:10 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <algorithm>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	argv++;
	while (*argv)
	{
		std::string arg = *argv;
		std::transform(arg.begin(), arg.end(), arg.begin(), toupper);
		std::cout << arg;
		argv++;
	}
	putchar('\n');
	return (0);
}
