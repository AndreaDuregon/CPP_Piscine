/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:11:28 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 16:11:50 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast()	{}

Cast::Cast(Cast const &copy)
{
	static_cast<void>(copy);
}

Cast	&Cast::operator = (Cast const &op)
{
	static_cast<void>(op);
	return (*this);
}

Cast::~Cast()	{}

float		Cast::isCastable(std::string const &s)
{
	try
	{
		if (s.length() == 3)
		{
			if (s[0] == '\'' && s[2] == '\'')
				return (static_cast<float>(s[1]));
		}
		else
			return (stof(s));
	}
	catch(const std::exception& e)
	{
		throw Cast::NonCastableException();
	}
	return (stof(s));
}

int			Cast::toInt(float f)
{
	if (f == std::numeric_limits<float>::infinity() ||
		f == -std::numeric_limits<float>::infinity() ||
		std::isnan(f))
			throw Cast::ImpossibleConvertionException();
	else
		return (static_cast<int>(f));
}

double			Cast::toDouble(float f)
{
	return (static_cast<double>(f));
}

float			Cast::toFloat(float f)
{
	return (static_cast<float>(f));
}

char			Cast::toChar(float f)
{
	if (f < 32 || f > 126)
		throw Cast::NonDisplayedException();
	else if (f == std::numeric_limits<float>::infinity() ||
		f == -std::numeric_limits<float>::infinity() ||
		std::isnan(f))
		throw Cast::ImpossibleConvertionException();
	else
		return (static_cast<char>(f));
}

Cast::NonCastableException::NonCastableException() throw()	{}

const char*		Cast::NonCastableException::what() const throw()
{
	return ("String non-castable");
}

Cast::ImpossibleConvertionException::ImpossibleConvertionException() throw()	{}

const char*		Cast::ImpossibleConvertionException::what() const throw()
{
	return ("Impossible to convert");
}

Cast::NonDisplayedException::NonDisplayedException() throw()	{}

const char*		Cast::NonDisplayedException::what() const throw()
{
	return ("Impossible to display");
}