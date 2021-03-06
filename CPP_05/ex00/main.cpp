/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:21:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 01:11:56 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat pino = Bureaucrat("Pino", 75);
	Bureaucrat gino = Bureaucrat("Gino", 1);
	Bureaucrat lino = Bureaucrat("Lino", 150);
	
	std::cout << "\n\033[1;34mPINO\033[0m" << std::endl;
	try
	{
		std::cout << pino;
		std::cout << "\033[32m*** UPGRADE ***\033[0m" << std::endl;
		pino.upgrade();
		std::cout << pino;
		std::cout << "\033[31m** DOWNGRADE **\033[0m" << std::endl;
		pino.downgrade();
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
		std::cout << "\033[32m*** UPGRADE ***\033[0m" << std::endl;
		gino.upgrade();
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
		std::cout << "\033[31m** DOWNGRADE **\033[0m" << std::endl;
		lino.downgrade();
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