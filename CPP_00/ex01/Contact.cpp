/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:33:15 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/26 12:44:27 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_first_name(std::string s)
{
	Contact::first_name = s;
}

void	Contact::set_last_name(std::string s)
{
	Contact::last_name = s;
}

void	Contact::set_nickname(std::string s)
{
	Contact::nickname = s;
}

void	Contact::set_login(std::string s)
{
	Contact::login = s;
}

void	Contact::set_postal_address(std::string s)
{
	Contact::postal_address = s;
}

void	Contact::set_email_address(std::string s)
{
	Contact::email_address = s;
}

void	Contact::set_phone_number(std::string s)
{
	Contact::phone_number = s;
}

void	Contact::set_birthday_date(std::string s)
{
	Contact::birthday_date = s;
}

void	Contact::set_favorite_meal(std::string s)
{
	Contact::favorite_meal = s;
}

void	Contact::set_underwear_color(std::string s)
{
	Contact::underwear_color = s;
}

void	Contact::set_darkest_secret(std::string s)
{
	Contact::darkest_secret = s;
}

void	Contact::get_first_name()
{
	std::cout << Contact::first_name << std::endl;
}

void	Contact::get_last_name()
{
	std::cout << Contact::last_name << std::endl;
}

void	Contact::get_nickname()
{
	std::cout << Contact::nickname << std::endl;
}

void	Contact::get_login()
{
	std::cout << Contact::login << std::endl;
}

void	Contact::get_postal_address()
{
	std::cout << Contact::postal_address << std::endl;
}

void	Contact::get_email_address()
{
	std::cout << Contact::email_address << std::endl;
}

void	Contact::get_phone_number()
{
	std::cout << Contact::phone_number << std::endl;
}

void	Contact::get_birthday_date()
{
	std::cout << Contact::birthday_date << std::endl;
}

void	Contact::get_favorite_meal()
{
	std::cout << Contact::favorite_meal << std::endl;
}

void	Contact::get_underwear_color()
{
	std::cout << Contact::underwear_color << std::endl;
}

void	Contact::get_darkest_secret()
{
	std::cout << Contact::darkest_secret << std::endl;
}