/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:11:09 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 22:29:17 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
}

ZombieHorde::ZombieHorde(int N)
{
	char		letter[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	std::string	name;
	int			nameLen;

	this->hordeDim = N;
	this->zombie = new Zombie[N]();
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		name = "";
		nameLen = rand() % 11;
		for (int j = 0; j < nameLen; j++)
			name = name + letter[rand() % 26];
		this->zombie[i].set_name(name);
		this->zombie[i].set_type("Horde");
	}
}

ZombieHorde::~ZombieHorde()
{
	
		delete [] zombie;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->hordeDim; i++)
		this->zombie[i].announce();
}