/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:06:53 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 01:04:17 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string		name;
	bool			isSigned;
	int				gradeToSign;
	int				gradeToExec;
	Form(/* args */);
public:
	Form(std::string const n, int const gts, int const gte);
	Form(Form const &copy);
	Form &operator = (Form const &op);
	~Form();
	std::string		getName() const;
	bool			getIsSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExec() const;
	void			beSigned(Bureaucrat const &b);
	
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() throw();
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() throw();
		virtual const char *what() const throw();
	};
};

std::ostream	&operator << (std::ostream &out, Form &f);

