/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:52:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 12:05:38 by aduregon         ###   ########.fr       */
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
	~Peon();
	void	getPolymorphed() const;
};

