/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:26:25 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 11:33:36 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string t, std::string n)
{
	this->type = t;
	this->name = n;
}

Zombie::~Zombie()
{
}

void	Zombie::set_type(std::string s)
{
	this->type = s;
}

void	Zombie::set_name(std::string s)
{
	this->name = s;
}

std::string	Zombie::get_type()
{
	return (this->type);
}

std::string	Zombie::get_name()
{
	return (this->name);
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss..." << std::endl;
}