/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:27:05 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/29 12:12:27 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::ZombieEvent(std::string t)
{
	this->type = t;
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string s)
{
	this->type = s;
}

Zombie	*ZombieEvent::newZombie(std::string s)
{
	Zombie *zombie = new Zombie(this->type, s);
	return (zombie);
}

void	ZombieEvent::randomChump()
{
	Zombie		*zombie;
	char		letter[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	std::string	name;
	int			nameLen;

	srand(time(NULL));
	zombie = new Zombie();
	zombie->set_type("Random");
	nameLen = rand() % 11;
	name = "";
	for (int i = 0; i < nameLen; i++)
		name = name + letter[rand() % 26];
	zombie->set_name(name);
	zombie->announce();
	delete (zombie);
}