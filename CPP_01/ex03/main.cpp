/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:10:57 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 22:31:45 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(int argc, char **argv)
{
	int			hordeDim;

	if (argc != 2)
	{
		std::cout << "INVALID ARGUMENTS" << std::endl;
		return 0;

	}
	hordeDim = std::atoi(argv[1]);
	if (hordeDim < 0 || hordeDim > 2147483647)
	{
		std::cout << "INVALID ARGUMENT" << std::endl;
		return 0;
	}
	ZombieHorde horde(hordeDim);
	horde.announce();
}