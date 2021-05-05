/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:33:38 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 15:39:49 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant(/* args */);
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator = (SuperMutant const &op);
	~SuperMutant();
	void	takeDamage(int d);
};

