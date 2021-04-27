/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:54:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 16:17:49 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	check_email(std::string s)
{
	int i;

	i = 0;
	while (s[i])
		if (s[i++] == 64)
			return 1;
	return 0;
}

int	check_number(std::string s)
{
	int i;

	i = 0;
	while (s[i])
		if (!(std::isdigit(s[i++])))
			return 0;
	return 1;
}

int	check_date(std::string s)
{
	return (std::isdigit(s[0]) && std::isdigit(s[1]) && s[2] == 47 &&
			std::isdigit(s[3]) && std::isdigit(s[4]) && s[5] == 47 &&
			std::isdigit(s[6]) && std::isdigit(s[7]) && std::isdigit(s[8]) && std::isdigit(s[9]));
}

Contact	add_contact()
{
	Contact c;
	std::string	s;

	std::cout << "INSERT FIRST NAME: ";
	getline(std::cin, s);
	c.set_first_name(s);
	std::cout << "INSERT LAST NAME: ";
	getline(std::cin, s);
	c.set_last_name(s);
	std::cout << "INSERT NICKNAME: ";
	getline(std::cin, s);
	c.set_nickname(s);
	std::cout << "INSERT LOGIN: ";
	getline(std::cin, s);
	c.set_login(s);
	std::cout << "INSERT POSTAL ADDRESS: ";
	getline(std::cin, s);
	c.set_postal_address(s);
	while (1)
	{
		std::cout << "INSERT EMAIL ADDRESS: ";
		getline(std::cin, s);
		if (check_email(s))
		{
			c.set_email_address(s);
			break ;
		}
		else
			std::cout << "EMAIL ADDRESS NOT VALID!\n";
	}
	while (1)
	{
		std::cout << "INSERT PHONE NUMBER: ";
		getline(std::cin, s);
		if (check_number(s))
		{
			c.set_phone_number(s);
			break ;
		}
		else
			std::cout << "NUMBER NOT VALID\n";

	}
	while (1)
	{
		std::cout << "INSERT BIRTHDAY DATE (DD/MM/YYYY): ";
		getline(std::cin, s);
		if (check_date(s))
		{
			c.set_birthday_date(s);
			break ;
		}
		else
			std::cout << "DATE FORMAT NOT VALID\n";
	}
	std::cout << "INSERT FAVORITE MEAL: ";
	getline(std::cin, s);
	c.set_favorite_meal(s);
	std::cout << "INSERT UNDERWEAR COLOR: ";
	getline(std::cin, s);
	c.set_underwear_color(s);
	std::cout << "INSERT DARKEST SECRET: ";
	getline(std::cin, s);
	c.set_darkest_secret(s);

	return (c);
}

void	list_phonebook(Contact p[8], int j)
{
	int i;
	int	z;
	std::string	fn;
	std::string ln;
	std::string nn;

	i = 0;
	while (i < j)
	{
		fn = p[i].get_first_name();
		ln = p[i].get_last_name();
		nn = p[i].get_nickname();
		std::cout << std::setw(10) << i << "|";
		if (fn.length() > 10)
		{
			z = 0;
			while(z < 9)
				std::cout << fn[z++];
			std::cout << ".";
		}
		else
			std::cout << std::setw(10) << fn;
		std::cout << "|";
		if (ln.length() > 10)
		{
			z = 0;
			while(z < 9)
				std::cout << ln[z++];
			std::cout << ".";
		}
		else
			std::cout << std::setw(10) << ln;
		std::cout << "|";
		if (nn.length() > 10)
		{
			z = 0;
			while(z < 9)
				std::cout << nn[z++];
			std::cout << ".";
		}
		else
			std::cout << std::setw(10) << nn;
		std::cout << std::endl;
		i++;
	}
}

void	search_phonebook(Contact p[8], int j)
{
	std::string	index;
	int		i;

	std::cout << "INSERT INDEX DESIRED: ";
	getline(std::cin, index);
	i = 0;
	while (index[i])
		if (!(std::isdigit(index[i++])))
		{
			std::cout << "INDEX NOT VALID!\n";
			return ;
		}
	i = std::stoi(index);
	if (i > j - 1)
		std::cout << "CONTACT DOESN'T EXIST!\n";
	else
	{
		std::cout << "First name: " << p[i].get_first_name() << std::endl;
		std::cout << "Last name: " << p[i].get_last_name() << std::endl;
		std::cout << "Nickname: " << p[i].get_nickname() << std::endl;
		std::cout << "Login: " << p[i].get_login() << std::endl;
		std::cout << "Posta address: " << p[i].get_postal_address() << std::endl;
		std::cout << "Email address: " << p[i].get_email_address() << std::endl;
		std::cout << "Phone number: " << p[i].get_phone_number() << std::endl;
		std::cout << "Birthday date: " << p[i].get_birthday_date() << std::endl;
		std::cout << "Favourite meal: " << p[i].get_favorite_meal() << std::endl;
		std::cout << "Underwear color: " << p[i].get_underwear_color() << std::endl;
		std::cout << "Darkest secret: " << p[i].get_darkest_secret() << std::endl;
	}

}

int	main()
{
	std::string	command;
	Contact		phonebook[8];
	int		i;
	int		j;

	std::cout << "MY AWESOME PHONEBOOK" << std::endl;
	j = 0;
	while (1)
	{
		i = 0;
		std::cout << "INSERT COMMAND (ADD/SEARCH/EXIT)" << std::endl;
		getline(std::cin, command);
		while(command[i])
		{
			command[i] = char(toupper(command[i]));
			i++;
		}
		if (!(command.compare("ADD")))
		{
			if (j < 8)
				phonebook[j++] = add_contact();
			else
				std::cout << "PHONEBOOK FULL" << std::endl;
		}
		else if (!(command.compare("SEARCH")))
		{
			list_phonebook(phonebook, j);
			search_phonebook(phonebook, j);
		}
		else if (!(command.compare("EXIT")))
			break;
		else
			std::cout << command << " comando non valido\n";
	}
	std::cout << "BYE BYE!" << std::endl;
}