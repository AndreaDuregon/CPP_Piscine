/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:45:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 22:56:17 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main ()
{
	Array<int>	a1 = Array<int>(5);
	int			*array;

	std::cout << "\033[0;36mCREATION OF ARRAY OF N\033[0m" << std::endl;
	std::cout << std::endl;
	for (unsigned int i = 0; i < a1.size(); i++)
		std::cout << "a1[" << i << "] = " << a1[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[0;36mCREATION OF A COPY\033[0m" << std::endl;
	std::cout << std::endl;
	Array<int> copyA1 = Array<int>(a1);
	array = copyA1.getArray();
	array[0] = 1;
	std::cout << "\033[0;37mPrint old array: \033[0m" << std::endl;
	for (unsigned int i = 0; i < a1.size(); i++)
		std::cout << a1[i] << " ";
	std::cout << std::endl;
	std::cout << "\033[0;37mPrint new array: \033[0m" << std::endl;
	for (unsigned int i = 0; i < copyA1.size(); i++)
		std::cout << copyA1[i]  << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[0;36mASSIGNATION OPERATOR\033[0m" << std::endl;
	std::cout << std::endl;
	Array<int> assA1 = a1;
	array = assA1.getArray();
	array[0] = 2;
	std::cout << "\033[0;37mPrint old array: \033[0m" << std::endl;
	for (unsigned int i = 0; i < a1.size(); i++)
		std::cout << a1[i] << " ";
	std::cout << std::endl;
	std::cout << "\033[0;37mPrint new array: \033[0m" << std::endl;
	for (unsigned int i = 0; i < assA1.size(); i++)
		std::cout << assA1[i]  << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[0;36mSTRING ARRAY\033[0m" << std::endl;
	std::cout << std::endl;
	Array<std::string> a2 = Array<std::string>(3);
	a2[0] = "ciao";
	a2[1] = "miao";
	a2[2] = "bau";
	for (unsigned int i = 0; i < a2.size(); i++)
			std::cout << a2[i]  << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[0;36m[] OPERATOR\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[0;37mInside array: \033[0m" << std::endl;
	try
	{
		a2[0] = "mela";
		a2[1] = "pera";
		for (unsigned int i = 0; i < a2.size(); i++)
			std::cout << a2[i]  << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[0;37mOut of bound: \033[0m" << std::endl;
	try
	{
		a2[3] = "mela";
		for (unsigned int i = 0; i < a2.size(); i++)
			std::cout << a2[i]  << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}