/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:41:05 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 17:56:09 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void*	serialize(void)
{
	char	*raw = new char[24];
	char	pool[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
					  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	std::srand(time(NULL));
	for (int i = 0; i < 10; i++)
		raw[i] = pool[rand() % 26];
	*reinterpret_cast<int*>(raw + 10) = rand() % 100;
	for (int i = 0; i < 10; i++)
		raw[i + 14] = pool[rand() % 26];
	return (reinterpret_cast<void *>(raw));
}

Data*	deserialize(void* raw)
{
	Data	*notRaw = new Data();

	(void)raw;
	notRaw->s1 = std::string(static_cast<char *>(raw), 10);
	notRaw->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 4);
	notRaw->s2 = std::string(reinterpret_cast<char *>(raw) + 14, 10);
	return (notRaw);
}
