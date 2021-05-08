/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:31:48 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 11:33:35 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Intern
{
private:
public:
	Intern(/* args */);
	Intern(Intern const &copy);
	Intern &operator = (Intern const &op);
	~Intern();
	Form	*makeForm(std::string const &n, std::string const &t);
};

Form*	createPresidential(std::string const & target);
Form*	createRobotomy(std::string const & target);
Form*	createShrubbery(std::string const & target);