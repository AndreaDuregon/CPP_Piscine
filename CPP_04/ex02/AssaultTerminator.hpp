/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:46:58 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 23:14:48 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
public:
	AssaultTerminator(/* args */);
	AssaultTerminator(AssaultTerminator const &copy);
	AssaultTerminator &operator = (AssaultTerminator const &op);
	~AssaultTerminator();
	AssaultTerminator	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};
