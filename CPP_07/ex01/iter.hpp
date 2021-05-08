/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:14:30 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 21:41:10 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	iter(T (*array), int dim, void (*func)(T &))
{
	for (int i = 0; i < dim; i++)
		func(array[i]);
	std::cout << std::endl;
}

template<typename T>
void	printArray(T &t)
{
	std::cout << t << " ";
}