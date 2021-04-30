/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:24 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/30 18:52:34 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap f("Polipo");
	f.rangedAttack("Pippo");
	f.meleeAttack("Mino");
	f.takeDamage(30);
	f.takeDamage(4);
	f.vaulthunter_dot_exe("Gino");
	f.beRepaired(35);	
}