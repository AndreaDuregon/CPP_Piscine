/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:52:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:54:37 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon(/* args */);
public:
	Peon(std::string n);
	Peon(Peon const &copy);
	Peon &operator = (Peon const &op);
	virtual ~Peon();
	void	getPolymorphed() const;
};

