/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:29:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 23:24:51 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int>	vec;
	
	vec.push_back(1);
	vec.push_back(10);
	vec.push_back(100);
	vec.push_back(1000);
	vec.push_back(10000);

	try
	{
		std::cout << easyfind(vec, 100) << std::endl;
		std::cout << easyfind(vec, 1) << std::endl;
		std::cout << easyfind(vec, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}