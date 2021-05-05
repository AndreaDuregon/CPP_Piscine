/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:46:25 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 23:14:03 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
public:
	TacticalMarine(/* args */);
	TacticalMarine(TacticalMarine const &copy);
	TacticalMarine &operator = (TacticalMarine const &op);
	~TacticalMarine();
	TacticalMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

