/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:24 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/03 16:34:19 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap f = FragTrap("Rick");
	f.rangedAttack("Zombie");
	f.meleeAttack("Zombie");
	f.takeDamage(30);
	f.takeDamage(4);
	f.vaulthunter_dot_exe("Carl");
	f.vaulthunter_dot_exe("Carl");
	f.vaulthunter_dot_exe("Carl");
	f.vaulthunter_dot_exe("Carl");
	f.vaulthunter_dot_exe("Carl");
	f.beRepaired(35);
	f.takeDamage(105);
}