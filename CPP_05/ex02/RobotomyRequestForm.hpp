/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:18:40 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 16:53:58 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class  RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm(/* args */);
	void			formAction() const;
public:
	RobotomyRequestForm(std::string const &t);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm &operator = (RobotomyRequestForm const &op);
	~RobotomyRequestForm();
	std::string		getTarget() const;

	class RobotomizedUnsuccesfullyException : public std::exception
	{
		public:
		RobotomizedUnsuccesfullyException() throw();
		virtual const char *what() const throw();
	};
};