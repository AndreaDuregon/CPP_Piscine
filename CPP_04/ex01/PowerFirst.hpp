/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFirst.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:32:54 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 13:30:19 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
public:
	PowerFist(/* args */);
	PowerFist(std::string const &n, int d, int a);
	PowerFist(PowerFist const &copy);
	PowerFist &operator = (PowerFist const &op);
	~PowerFist();
	void	attack() const;
};