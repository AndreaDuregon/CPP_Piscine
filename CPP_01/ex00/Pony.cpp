/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:54:29 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/26 22:43:39 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
}

Pony::Pony(std::string race, int height, int weight, int age)
{
	Pony::race = race;
	Pony::height = height;
	Pony::weight = weight;
	Pony::age = age;
}

Pony::~Pony()
{
}

void	Pony::set_race(std::string s)
{
	Pony::race = s;
}

void	Pony::set_height(int x)
{
	Pony::height = x;
}

void	Pony::set_weight(int x)
{
	Pony::weight = x;
}

void	Pony::set_age(int x)
{
	Pony::age = x;
}

std::string	Pony::get_race()
{
	return (Pony::race);
}

int	Pony::get_height()
{
	return (Pony::height);
}

int	Pony::get_weight()
{
	return (Pony::weight);
}

int	Pony::get_age()
{
	return (Pony::age);
}

void	Pony::print_pony()
{
	std::cout << "RACE: " << get_race() << std::endl;
	std::cout << "HEIGHT: " << get_height() << std::endl;
	std::cout << "WEIGHT: " << get_weight() << std::endl;
	std::cout << "AGE: " << get_age() << std::endl;

}