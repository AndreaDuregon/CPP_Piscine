/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:52:19 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:53:58 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Jolly.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Jolly jeff("Jeff");
	std::cout << robert << jim << joe << jeff;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jeff);
	return 0;
}