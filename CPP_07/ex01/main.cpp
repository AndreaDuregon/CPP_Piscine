/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:14:35 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 16:36:16 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

int main()
{
	int			a1[] = {1, 2, 3, 4, 5};
	double		a2[] = {1.0, 2.1, 3.2, 4.3, 5.4};
	std::string	a3[] = {"ciao", "miao", "bau", "coccode", "chicchirichi"};
	char		a4[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "\033[1;36m-------------- INT --------------\033[0m" << std::endl;
	std::cout << std::endl;
	iter(a1, 5, printArray);
	std::cout << std::endl;
	std::cout << "\033[1;36m-------------- DBL --------------\033[0m" << std::endl;
	std::cout << std::endl;
	iter(a2, 5, printArray);
	std::cout << std::endl;
	std::cout << "\033[1;36m-------------- STR --------------\033[0m" << std::endl;
	std::cout << std::endl;
	iter(a3, 5, printArray);
	std::cout << std::endl;
	std::cout << "\033[1;36m-------------- CHR --------------\033[0m" << std::endl;
	std::cout << std::endl;
	iter(a4, 5, printArray);
	std::cout << std::endl;

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;36m-------------- CRR --------------\033[0m" << std::endl;
	std::cout << std::endl;
	iter( tab, 5, printArray);
	iter( tab2, 5, printArray);
}