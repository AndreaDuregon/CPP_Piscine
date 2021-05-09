/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:07:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 11:54:20 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const n, int const gts, int const gte) : name(n), gradeToSign(gts), gradeToExec(gte)
{
	if (gts < 1 || gte < 1)
		throw GradeTooHighException();
	else if (gts > 150 | gte > 150)
		throw GradeTooLowException();
	this->isSigned = false;
}

Form::Form(Form const &copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec)
{
	this->isSigned = copy.isSigned;
}

Form		&Form::operator = (Form const &op)
{
	if (this == &op)
		return (*this);
	return (*this);
}

Form::~Form()	{}

std::string const		Form::getName() const
{
	return (this->name);
}

bool					Form::getIsSigned() const
{
	return (this->isSigned);
}

int						Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int						Form::getGradeToExec() const
{
	return (this->gradeToExec);
}

void			Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	else
		this->isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException() throw()	{}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Too high grade");
}

Form::GradeTooLowException::GradeTooLowException() throw()	{}

const char		*Form::GradeTooLowException::what() const throw()
{
	return ("Too low grade!");
}

std::ostream	&operator << (std::ostream &out, Form &f)
{
	out << "NAME: " << f.getName() << "\nSIGN: " << f.getIsSigned() << "\nGRADE TO SIGN: " << f.getGradeToSign() << "\nGRADE TO EXEC: " << f.getGradeToExec() << std::endl;
	return (out);
}