/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:41:05 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 13:14:24 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void*	serialize(void)
{
	Data	*data = new Data();
	char	pool[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
					  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	std::srand(time(NULL));
	for (int i = 0; i < 24; i++)
		data->s1 += pool[rand() % 25];
	data->n = rand() % 100;
	for (int i = 0; i < 24; i++)
		data->s2 += pool[rand() % 25];

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	return (reinterpret_cast<void *>(data));
}

Data*	deserialize(void* raw)
{
	return (reinterpret_cast<Data *>(raw));
}
