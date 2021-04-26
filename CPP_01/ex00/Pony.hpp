/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:54:58 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/26 22:38:12 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
private:
	std::string	race;
	int			height;
	int			weight;
	int			age;
public:
	Pony();
	Pony(std::string race, int height, int weigth, int age);
	~Pony();
	void		set_race(std::string s);
	void		set_height(int x);
	void		set_weight(int x);
	void		set_age(int x);
	std::string	get_race();
	int			get_height();
	int			get_weight();
	int			get_age();
	void		print_pony();
};

#endif