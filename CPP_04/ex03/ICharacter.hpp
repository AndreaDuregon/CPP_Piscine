/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:37:18 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 12:21:32 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
 
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
	virtual ~ICharacter() {}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};