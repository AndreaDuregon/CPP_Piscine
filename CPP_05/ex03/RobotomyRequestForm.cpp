/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:18:48 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 16:53:11 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &t) : Form("Robotomy Form", 72, 45)
{
	std::srand(time(NULL));
	this->target = t;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy)
{
	this->target = copy.target;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (RobotomyRequestForm const &op)
{
	if (this == &op)
		return (*this);
	else
	{
		this->name = op.getName();
		this->isSigned = op.getIsSigned();
		this->gradeToSign = op.getGradeToSign();
		this->gradeToExec = op.getGradeToExec();
		this->target = op.getTarget();
		return (*this);
	}
}

RobotomyRequestForm::~RobotomyRequestForm()		{}

std::string			RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void				RobotomyRequestForm::formAction() const
{
	std::cout << "DRIIILLLLLLL" << std::endl;
	if (rand() % 2 == 1)
		std::cout << this->target << " has succesfully robotomized!" << std::endl;
	else
	{
		std::cout << this->target;
		throw RobotomizedUnsuccesfullyException();
	}
}

RobotomyRequestForm::RobotomizedUnsuccesfullyException::RobotomizedUnsuccesfullyException() throw()	{}

const char			*RobotomyRequestForm::RobotomizedUnsuccesfullyException::what() const throw()
{
	return (" has unsuccesfully robotomized!\n");
}