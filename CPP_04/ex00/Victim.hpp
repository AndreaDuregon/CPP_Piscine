/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:51:40 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 12:08:12 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Victim
{
protected:
	std::string	name;
	Victim();
public:
	Victim(std::string n);
	Victim(Victim const &copy);
	Victim &operator = (Victim const &op);
	~Victim();
	std::string		getName() const;
	virtual void	getPolymorphed() const; 
};

std::ostream &operator << (std::ostream &out, Victim &v);
