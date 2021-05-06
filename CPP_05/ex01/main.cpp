/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:21:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 01:23:14 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	pino = Bureaucrat("Pino", 75);
	Bureaucrat 	gino = Bureaucrat("Gino", 1);
	Bureaucrat 	lino = Bureaucrat("Lino", 150);
	Form		f1 = Form("Form1", 80, 90);
	Form		f2 = Form("Form2", 1, 90);
	Form		f3 = Form("Form3", 149, 90);
	
	std::cout << "\n\033[1;34mPINO\033[0m" << std::endl;
	try
	{
		std::cout << f1;
		std::cout << pino;
		pino.toSign(f1);
		std::cout << f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mGINO\033[0m" << std::endl;
	try
	{
		std::cout << gino;
		gino.toSign(f1);
		gino.toSign(f2);
		std::cout << f2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mLINO\033[0m" << std::endl;
	try
	{
		std::cout << lino;
		lino.toSign(f3);
		std::cout << "\033[32m*** UPGRADE ***\033[0m" << std::endl;
		lino.upgrade();
		lino.toSign(f3);
		std::cout << f3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mFORM 4\033[0m" << std::endl;
	try
	{
		Form	f4 = Form("Form4", 151, 90);
		std::cout << f4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mFORM 5\033[0m" << std::endl;
	try
	{
		Form	f5 = Form("Form5", 0, 90);
		std::cout << f5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}