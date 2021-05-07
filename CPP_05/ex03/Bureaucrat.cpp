/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:21:05 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 16:52:33 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()	{}

Bureaucrat::Bureaucrat(std::string const n, int g)
{
	if (g <= 0)
		throw Bureaucrat::GradeTooLowException();
	else if (g > 150)
		throw Bureaucrat::GradeTooHighException();
	this->name = n;
	this->grade = g;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	this->name = copy.name;
	this->grade = copy.grade;
}

Bureaucrat	&Bureaucrat::operator = (Bureaucrat const &op)
{
	if (this == &op)
		return (*this);
	this->name = op.getName();
	this->grade = op.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()	{}

std::string const		Bureaucrat::getName() const
{
	return (this->name);
}

int						Bureaucrat::getGrade() const
{
	return (this->grade);
}

void					Bureaucrat::upgrade()
{
	if (this->grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void					Bureaucrat::downgrade()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void					Bureaucrat::toSign(Form &f)
{
	if (f.getIsSigned())
		std::cout << this->name << " cannot sign " << f.getName() << " beacuse is already signed" << std::endl;
	else
	{
		try
		{
			f.beSigned(*this);
			std::cout << this->name << " signs " << f.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << this->name << " cannot sign " << f.getName() << " beacuse his grade is too low" << std::endl;
			std::cerr << e.what() << '\n';
		}
		
	}
}

void					Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()	{}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too high grade!");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()	{}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low grade!");
}

std::ostream	&operator << (std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}