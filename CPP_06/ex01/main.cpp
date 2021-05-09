/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:41:37 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 13:20:55 by aduregon         ###   ########.fr       */
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
	 std::cout << "size of s1: " << sizeof(notRaw->s1) << std::endl;
	 std::cout << "size of n: " << sizeof(notRaw->n) << std::endl;
	std::cout << "size of s2: " << sizeof(notRaw->s2) << std::endl;;
}