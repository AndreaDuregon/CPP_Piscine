/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:32:30 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 13:08:42 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle(/* args */);
	PlasmaRifle(std::string const &n, int d, int a);
	PlasmaRifle(PlasmaRifle const &copy);
	PlasmaRifle &operator = (PlasmaRifle const &op);
	~PlasmaRifle();
	void	attack() const;
};

