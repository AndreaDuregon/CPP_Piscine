/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:54:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/26 13:06:41 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact	add_contact()
{
	Contact c;
	std::string	s;

	getline(std::cin, s);
	std::cout << "INSERT FIRST NAME: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_first_name(s);
	std::cout << "INSERT LAST NAME: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_last_name(s);
	std::cout << "INSERT NICKNAME: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_nickname(s);
	std::cout << "INSERT LOGIN: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_login(s);
	std::cout << "INSERT POSTAL ADDRESS: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_postal_address(s);
	std::cout << "INSERT EMAIL ADDRESS: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_email_address(s);
	std::cout << "INSERT PHONE NUMBER: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_phone_number(s);
	std::cout << "INSERT BIRTHDAY DATE: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_birthday_date(s);
	std::cout << "INSERT FAVORITE MEAL: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_favorite_meal(s);
	std::cout << "INSERT UNDERWEAR COLOR: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_underwear_color(s);
	std::cout << "INSERT DARKEST SECRET: ";
	getline(std::cin, s);
	std::cout << std::endl;
	c.set_darkest_secret(s);

	return (c);
}

void	print_phonebook(Contact p[8], int j)
{
	int i = 0;

	while (i < j)
	{
		p[i].get_first_name();
		p[i].get_last_name();
		p[i].get_nickname();
		p[i].get_login();
		p[i].get_postal_address();
		p[i].get_email_address();
		p[i].get_phone_number();
		p[i].get_birthday_date();
		p[i].get_favorite_meal();
		p[i].get_underwear_color();
		p[i].get_darkest_secret();
		i++;
	}
}

int	main()
{
	char	command[6];
	Contact	phonebook[8];
	int		i;
	int		j;

	std::cout << "MY AWESOME PHONEBOOK" << std::endl;
	j = 0;
	while (1)
	{
		i = 0;
		std::cout << "INSERT COMMAND (ADD/SEARCH/EXIT)" << std::endl;
		std::cin >> command;
		while(command[i])
		{
			command[i] = char(toupper(command[i]));
			i++;
		}
		if (!(std::strcmp("ADD", command)))
		{
			if (j < 8)
				phonebook[j++] = add_contact();
			else
				std::cout << "PHONEBOOK FULL" << std::endl;
		}
		else if (!(std::strcmp("PRINT", command)))
		{
			print_phonebook(phonebook, j);
		}
		else if (!(std::strcmp("SEARCH", command)))
			std::cout << "HAI INSERITO 'SEARCH'" << std::endl;
		else if (!(std::strcmp("EXIT", command)))
			break;
		else
			std::cout << command << " comando non valido\n";
	}
	std::cout << "BYE BYE!" << std::endl;
}