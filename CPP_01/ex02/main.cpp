/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:27:27 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/29 12:10:00 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent;
	Zombie *zombie;
	
	zombie = new Zombie("Zombie", "Chuck");
	zombie->announce();
	delete zombie;

	zombie = zombieEvent.newZombie("Turk");
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("Event");
	zombie = zombieEvent.newZombie("Turk");
	zombie->announce();
	delete zombie;

	zombieEvent.randomChump();
}