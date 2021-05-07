/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:07:00 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 16:53:02 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const n, int const gts, int const gte)
{
	if (gts < 1 || gte < 1)
		throw GradeTooHighException();
	else if (gts > 150 | gte > 150)
		throw GradeTooLowException();
	this->name = n;
	this->isSigned = false;
	this->gradeToSign = gts;
	this->gradeToExec = gte;
}

Form::Form(Form const &copy)
{
	this->name = copy.name;
	this->isSigned = copy.isSigned;
	this->gradeToSign = copy.gradeToSign;
	this->gradeToExec = copy.gradeToExec;
}

Form		&Form::operator = (Form const &op)
{
	if (this == &op)
		return (*this);
	this->name = op.getName();
	this->isSigned = op.getIsSigned();
	this->gradeToSign = op.getGradeToSign();
	this->gradeToExec = op.getGradeToExec();
	return (*this);
}

Form::~Form()	{}

std::string		Form::getName() const
{
	return (this->name);
}

bool			Form::getIsSigned() const
{
	return (this->isSigned);
}

int				Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int				Form::getGradeToExec() const
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

void			Form::execute(Bureaucrat const & executor) const
{
	if (this->isSigned == false)
		throw FormNotSignedException();
	else if (this->gradeToExec < executor.getGrade())
		throw GradeTooLowException();
	else
		this->formAction();
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

Form::FormNotSignedException::FormNotSignedException() throw()	{}

const char		*Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

std::ostream	&operator << (std::ostream &out, Form &f)
{
	out << "NAME: " << f.getName() << "\nSIGN: " << f.getIsSigned() << "\nGRADE TO SIGN: " << f.getGradeToSign() << "\nGRADE TO EXEC: " << f.getGradeToExec() << std::endl;
	return (out);
}