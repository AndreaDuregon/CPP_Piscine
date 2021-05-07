/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:21:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 17:15:48 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	pino = Bureaucrat("Pino", 145);
	Bureaucrat 	gino = Bureaucrat("Gino", 137);
	Bureaucrat 	lino = Bureaucrat("Lino", 72);
	Bureaucrat	mino = Bureaucrat("Mino", 45);
	Bureaucrat 	nino = Bureaucrat("Nino", 25);
	Bureaucrat 	tino = Bureaucrat("Tino", 5);
	ShrubberyCreationForm		f1 = ShrubberyCreationForm("First Form");
	RobotomyRequestForm		f2 = RobotomyRequestForm("Second Form");
	PresidentialPardonForm		f3 = PresidentialPardonForm("Third Form");
	
	std::cout << "\n\033[1;34mPINO E GINO\033[0m" << std::endl;
	try
	{
		std::cout << pino;
		std::cout << gino;
		pino.toSign(f1);
		gino.executeForm(f1);
		std::cout << f1; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mLINO E MINO\033[0m" << std::endl;
	try
	{
		std::cout << lino;
		std::cout << mino;
		lino.toSign(f2);
		mino.executeForm(f2);
		std::cout << f2; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mNINO E TINO\033[0m" << std::endl;
	try
	{
		std::cout << nino;
		std::cout << tino;
		nino.toSign(f3);
		tino.executeForm(f3);
		std::cout << f3; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mFORM NOT FIRMED\033[0m" << std::endl;
	try
	{
		PresidentialPardonForm	f4 = PresidentialPardonForm("Form4");
		pino.executeForm(f4);
		std::cout << f4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\033[1;34mTO LOW GRADE 5\033[0m" << std::endl;
	try
	{
		PresidentialPardonForm	f5 = PresidentialPardonForm("Form5");
		tino.toSign(f5);
		pino.executeForm(f5);
		std::cout << "----------------------\n";
		std::cout << pino;
		std::cout << "----------------------\n";
		std::cout << f5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}