/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Jolly.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:18:07 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:54:46 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Victim.hpp"

class Jolly : public Victim
{
private:
	Jolly(/* args */);
public:
	Jolly(std::string n);
	Jolly(Jolly const &copy);
	Jolly &operator = (Jolly const &op);
	virtual ~Jolly();
	void	getPolymorphed() const;
};
