/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:24 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 12:22:21 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap s = ScavTrap("Rick");
	s.rangedAttack("Zombie");
	s.meleeAttack("Zombie");
	s.takeDamage(30);
	s.takeDamage(2);
	s.challengeNewcomer("Carl");
	s.challengeNewcomer("Carl");
	s.challengeNewcomer("Carl");
	s.beRepaired(35);
	s.takeDamage(105);
}