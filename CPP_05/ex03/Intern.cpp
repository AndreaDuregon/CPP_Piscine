/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:31:56 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 12:16:27 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form* (*funcPtr)(std::string const &target);

typedef	struct	s_funcForm
{
	std::string	name;
	funcPtr		function;
}				t_funcForm;

Intern::Intern(/* args */)	{}

Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Intern		&Intern::operator = (Intern const &op)
{
	(void)op;
	return (*this);
}

Intern::~Intern()	{}

Form		*Intern::makeForm(std::string const &n, std::string const &t)
{
	Form	*ret;

	t_funcForm function[] = {{"Shrubbery Form", &createShrubbery},
							 {"Robotomy Form", &createRobotomy},
							 {"Presidential Form", &createPresidential}};
	for (int i = 0; i < 3; i++)
	{
		if (function[i].name == n)
		{
			ret = function[i].function(t);
			std::cout << "Intern creates " << ret->getName() << std::endl;
			return (ret);
		}
	}
	std::cout << "Intern can't creates this type of form!" << std::endl;
	return (NULL);
}

Form	*createShrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*createRobotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*createPresidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}