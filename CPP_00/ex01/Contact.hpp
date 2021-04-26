/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:56:22 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/26 12:08:17 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
public:
	Contact(/* args */);
	~Contact();
	void		set_first_name(std::string s);
	void		set_last_name(std::string s);
	void		set_nickname(std::string s);
	void		set_login(std::string s);
	void		set_postal_address(std::string s);
	void		set_email_address(std::string s);
	void		set_phone_number(std::string s);
	void		set_birthday_date(std::string s);
	void		set_favorite_meal(std::string s);
	void		set_underwear_color(std::string s);
	void		set_darkest_secret(std::string s);
	void		get_first_name();
	void		get_last_name();
	void		get_nickname();
	void		get_login();
	void		get_postal_address();
	void		get_email_address();
	void		get_phone_number();
	void		get_birthday_date();
	void		get_favorite_meal();
	void		get_underwear_color();
	void		get_darkest_secret();
};

#endif