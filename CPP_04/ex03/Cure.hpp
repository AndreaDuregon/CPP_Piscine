/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:36:07 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 00:08:17 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure(/* args */);
	Cure(Cure const &copy);
	Cure	&operator = (Cure const &op);
	~Cure();
	AMateria	*clone() const;
	void		use(ICharacter &target);
};