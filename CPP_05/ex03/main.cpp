/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:21:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 11:44:00 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Intern	someRandomIntern;
	Form*	sf;
	Form*	rf;
	Form*	pf;
	Form*	nef;

	std::cout << "\n\033[1;34mEXISTING FORM\033[0m" << std::endl;
	sf = someRandomIntern.makeForm("Shrubbery Form", "Fry");
	std::cout << *sf;
	rf = someRandomIntern.makeForm("Robotomy Form", "Bender");
	std::cout << *rf;
	pf = someRandomIntern.makeForm("Presidential Form", "Lela");
	std::cout << *pf;
	std::cout << std::endl;
	std::cout << "\n\033[1;34mNOT EXISTING FORM\033[0m" << std::endl;
	nef = NULL;
	nef = someRandomIntern.makeForm("Not Existing Form", "Zoidberg");
	std::cout << nef;
	delete sf;
	delete rf;
	delete pf;
}