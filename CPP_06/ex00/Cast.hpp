/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:11:38 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 16:10:10 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>
# include <string>
# include <limits>

class Cast
{
private:
public:
	Cast(/* args */);
	Cast(Cast const &copy);
	Cast	&operator = (Cast const &op);
	~Cast();
	float		isCastable(std::string const &s);
	int			toInt(float f);
	double		toDouble(float f);
	float		toFloat(float f);
	char		toChar(float f);

	class NonCastableException : public std::exception
	{
	public:
		NonCastableException() throw();
		virtual const char* what() const throw();
	};
	
	class ImpossibleConvertionException : public std::exception
	{
	public:
		ImpossibleConvertionException() throw();
		virtual const char* what() const throw();
	};

	class NonDisplayedException : public std::exception
	{
	public:
		NonDisplayedException() throw();
		virtual const char* what() const throw();
	};
};


