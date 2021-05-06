/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:36:57 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 15:19:44 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*list[4];
	int			count;
public:
	MateriaSource(/* args */);
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator = (MateriaSource const &op);
	~MateriaSource();
	void		learnMateria(AMateria *m);
	AMateria*	createMateria(std::string const &type);
};
