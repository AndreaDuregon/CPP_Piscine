/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:41:37 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 18:11:38 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int		main()
{
	void	*raw;
	Data	*notRaw;

	raw = serialize();
	notRaw = deserialize(raw);
	
	std::cout << "S1        = " << notRaw->s1 << std::endl;
	std::cout << "N         = " << notRaw->n << std::endl;
 	std::cout << "S2        = " << notRaw->s2 << std::endl;
	std::cout << "S1        = " << &notRaw->s1 << std::endl;
	std::cout << "N         = " << &notRaw->n << std::endl;
	std::cout << "S2        = " << &notRaw->s2 << std::endl;

	delete (reinterpret_cast<Data *>(raw));
	delete (notRaw);
}