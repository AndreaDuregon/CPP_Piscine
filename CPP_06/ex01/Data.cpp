/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:41:05 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 18:08:02 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void*	serialize(void)
{
	Data	*data = new Data();
	char	pool[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
					  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	std::srand(time(NULL));
	for (int i = 0; i < 10; i++)
		data->s1 += pool[rand() % 25];
	data->n = rand() % 100;
	for (int i = 0; i < 10; i++)
		data->s2 += pool[rand() % 25];

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	return (reinterpret_cast<void *>(data));
}

Data*	deserialize(void* raw)
{
	Data	*notRaw = new Data();

	(void)raw;
	notRaw->s1 = std::string(static_cast<char *>(raw) + 1, 10);
	notRaw->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 24);
	notRaw->s2 = std::string(reinterpret_cast<char *>(raw) + 33, 10);
	return (notRaw);
}
