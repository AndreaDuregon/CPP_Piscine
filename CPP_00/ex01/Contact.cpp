/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:33:15 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/26 15:18:41 by aduregon         ###   ########.fr       */
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

std::string	Contact::get_first_name()
{
	return(Contact::first_name);
}

std::string	Contact::get_last_name()
{
	return(Contact::last_name);
}

std::string	Contact::get_nickname()
{
	return(Contact::nickname);
}

std::string	Contact::get_login()
{
	return(Contact::login);
}

std::string	Contact::get_postal_address()
{
	return(Contact::postal_address);
}

std::string	Contact::get_email_address()
{
	return(Contact::email_address);
}

std::string	Contact::get_phone_number()
{
	return(Contact::phone_number);
}

std::string	Contact::get_birthday_date()
{
	return(Contact::birthday_date);
}

std::string	Contact::get_favorite_meal()
{
	return(Contact::favorite_meal);
}

std::string	Contact::get_underwear_color()
{
	return(Contact::underwear_color);
}

std::string	Contact::get_darkest_secret()
{
	return(Contact::darkest_secret);
}