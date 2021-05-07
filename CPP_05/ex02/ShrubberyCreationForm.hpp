/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:18:07 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 16:53:54 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class  ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm(/* args */);
	void			formAction() const;
public:
	ShrubberyCreationForm(std::string const &t);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm &operator = (ShrubberyCreationForm const &op);
	~ShrubberyCreationForm();
	std::string		getTarget() const;

	class FileNotOpenException : public std::exception
	{
		public:
		FileNotOpenException() throw();
		virtual const char *what() const throw();
	};
};

