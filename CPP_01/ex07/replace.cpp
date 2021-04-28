/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:41 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/28 16:13:44 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::ifstream file;
	std::string	line;

	if (argc != 4)
	{
		std::cout << "INVALID ARGUMENTS" << std::endl;
		return (0);
	}
	filename = argv[1];
	std::ofstream replace(filename + ".replace");
	s1 = argv[2];
	s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "ARGUMENTS CAN'T BE EMPTY" << std::endl;
		return (0);
	}
	file.open(filename);
	while (getline(file, line))
	{
		line = line + "\n";
		while (1)
		{
			if (line.find(s1) != std::string::npos)
				line.replace(line.find(s1), s1.length(), s2);
			else
			{
				replace << line;
				break ;
			}
		}
	}
	file.close();
	replace.close();
}