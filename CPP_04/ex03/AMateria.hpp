/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:35:26 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:15:46 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string		type;
	unsigned int	xp;
	AMateria(/* args */);
public:
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	AMateria &operator = (AMateria const &op);
	virtual ~AMateria();
	std::string	const	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

