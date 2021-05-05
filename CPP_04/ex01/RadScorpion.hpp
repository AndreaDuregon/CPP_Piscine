/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:35:46 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 15:42:11 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
public:
	RadScorpion(/* args */);
	RadScorpion(RadScorpion const &copy);
	RadScorpion &operator = (RadScorpion const &op);
	~RadScorpion();
	void	takeDamage(int d);
};