/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:11:29 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 22:03:03 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <ctime>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*zombie;
	int		hordeDim;
public:
	ZombieHorde();
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce();
};

#endif