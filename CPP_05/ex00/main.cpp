/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:21:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 00:05:23 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat pino = Bureaucrat("Pino", 75);
	Bureaucrat gino = Bureaucrat("Gino", 20);
	Bureaucrat lino = Bureaucrat("Lino", 150);
	
	std::cout << "\n\033[1;34mPINO\033[0m" << std::endl;
	try
	{
		std::cout << pino;
		std::cout << "\033[32m*** GRADE +25 ***\033[0m" << std::endl;
		pino.upgrade(25);
		std::cout << pino;
		std::cout << "\033[31m*** GRADE -50 ***\033[0m" << std::endl;
		pino.downgrade(50);
		std::cout << pino;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mGINO\033[0m" << std::endl;
	try
	{
		std::cout << gino;
		std::cout << "\033[32m*** GRADE +25 ***\033[0m" << std::endl;
		gino.upgrade(25);
		std::cout << gino;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mLINO\033[0m" << std::endl;
	try
	{
		std::cout << lino;
		std::cout << "\033[32m*** GRADE -1 ***\033[0m" << std::endl;
		lino.downgrade(1);
		std::cout << lino;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mNINO\033[0m" << std::endl;
	try
	{
		Bureaucrat Nino = Bureaucrat("Nino", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mMINO\033[0m" << std::endl;
	try
	{
		Bureaucrat Mino = Bureaucrat("Mino", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}