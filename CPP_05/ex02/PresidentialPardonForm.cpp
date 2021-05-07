/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:19:11 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 17:13:52 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &t) : Form("Presidential Form", 25, 5)
{
	this->target = t;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy)
{
	this->target = copy.target;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (PresidentialPardonForm const &op)
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

PresidentialPardonForm::~PresidentialPardonForm()		{}

std::string			PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void				PresidentialPardonForm::formAction() const
{
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}