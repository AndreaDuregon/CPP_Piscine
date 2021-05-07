/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:18:23 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 17:05:17 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &t) : Form("Shrubbery Form", 145, 137)
{
	this->target = t;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{
	this->target = copy.target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (ShrubberyCreationForm const &op)
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

ShrubberyCreationForm::~ShrubberyCreationForm()		{}

std::string			ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void				ShrubberyCreationForm::formAction() const
{
	std::ofstream fout(this->target + "_shrubbery");
	if (fout.is_open())
	{
		fout << "                      .                          " << std::endl;
		fout << "                      M                          " << std::endl;
		fout << "                     dM                          " << std::endl;
		fout << "                     MMr                         " << std::endl;
		fout << "                    4MMML                  .     " << std::endl;
		fout << "                    MMMMM.                xf     " << std::endl;
		fout << "    .              \"MMMMM               .MM-     " << std::endl;
		fout << "     Mh..          +MMMMMM            .MMMM      " << std::endl;
		fout << "     .MMM.         .MMMMML.          MMMMMh      " << std::endl;
		fout << "      )MMMh.        MMMMMM         MMMMMMM       " << std::endl;
		fout << "       3MMMMx.     'MMMMMMf      xnMMMMMM\"       " << std::endl;
		fout << "       '*MMMMM      MMMMMM.     nMMMMMMP\"        " << std::endl;
		fout << "         *MMMMMx    \"MMMMM\\    .MMMMMMM=         " << std::endl;
		fout << "          *MMMMMh   \"MMMMM\"   JMMMMMMP           " << std::endl;
		fout << "            MMMMMM   3MMMM.  dMMMMMM            ." << std::endl;
		fout << "             MMMMMM  \"MMMM  .MMMMM(        .nnMP\"" << std::endl;
		fout << " =..          *MMMMx  MMM\"  dMMMM\"    .nnMMMMM*  " << std::endl;
		fout << "   \"MMn...     'MMMMr 'MM   MMM\"   .nMMMMMMM*\"   " << std::endl;
		fout << "    \"4MMMMnn..   *MMM  MM  MMP\"  .dMMMMMMM\"\"     " << std::endl;
		fout << "      ^MMMMMMMMx.  *ML \"M .M*  .MMMMMM**\"        " << std::endl;
		fout << "         *PMMMMMMhn. *x > M  .MMMM**\"\"           " << std::endl;
		fout << "            \"\"**MMMMhx/.h/ .=*\"                  " << std::endl;
		fout << "                     .3P\"%....                   " << std::endl;
		fout << "                   nP\"     \"*MMnx                " << std::endl;
	}
	else
	{
		throw FileNotOpenException();
	}
	fout.close();
}

ShrubberyCreationForm::FileNotOpenException::FileNotOpenException() throw()	{}

const char			*ShrubberyCreationForm::FileNotOpenException::what() const throw()
{
	return ("Impossible to execute form!");
}