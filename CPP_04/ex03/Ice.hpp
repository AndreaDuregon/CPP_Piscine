/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:35:49 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 00:00:23 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice(/* args */);
	Ice(Ice const &copy);
	Ice	&operator = (Ice const &op);
	~Ice();
	AMateria	*clone() const;
	void		use(ICharacter &target);
};
