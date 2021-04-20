/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:08:06 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/20 15:23:59 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		exit(0);
	}
	for (int j = 1; j < argc; j++)
		for(int i = 0; i < strlen(argv[j]); i++)
		{
			std::cout << char(toupper(argv[j][i]));
		}
		std::cout << std::endl;
}