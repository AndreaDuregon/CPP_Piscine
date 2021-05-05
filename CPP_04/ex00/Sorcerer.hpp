/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:51:16 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 11:49:12 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	name;
	std::string	title;
	Sorcerer(/* args */);
public:
	Sorcerer(std::string n, std::string t);
	Sorcerer(Sorcerer const &copy);
	Sorcerer &operator = (Sorcerer const &op);
	~Sorcerer();
	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const &v) const;
};

std::ostream &operator << (std::ostream &out, Sorcerer &s);