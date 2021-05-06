/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:20:54 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 23:28:35 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	std::string			name;
	int					grade;
	Bureaucrat(/* args */);
public:
	Bureaucrat(std::string const n, int g);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator = (Bureaucrat const & op);
	~Bureaucrat();
	std::string const	getName() const;
	int					getGrade() const;
	void				upgrade(int n);
	void				downgrade(int n);
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException () throw();
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException () throw();
		const char *what() const throw();
	};
};

std::ostream	&operator << (std::ostream &out, Bureaucrat &b);
