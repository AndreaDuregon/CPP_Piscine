/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:13:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 16:23:36 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int argc, char **argv)
{
	Cast	c = Cast();
	float 	toCast;
	double	d;
	float	f;

	if (argc != 2)
		std::cout << "\033[1;31mInvalid number of parameters!\033[0m" << std::endl;
	else
	{
		try
		{
			toCast = c.isCastable(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return (1);
		}
		try
		{
			std::cout << "\033[1;37mINT: \033[0m" << c.toInt(toCast) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		f = c.toFloat(toCast);
		if (f - (int)f == 0)
			std::cout << "\033[1;37mFLT: \033[0m" << f << ".0f" << std::endl;
		else
			std::cout << "\033[1;37mFLT: \033[0m" << f << "f" << std::endl;
		d = c.toDouble(toCast);
		if (d - (int)d == 0)
			std::cout << "\033[1;37mDBL: \033[0m" << d << ".0" << std::endl;
		else
			std::cout << "\033[1;37mDBL: \033[0m" << d << std::endl;
		try
		{
			std::cout << "\033[1;37mCHR: \033[0m" << c.toChar(toCast) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[1;35m--------------------------\033[0m" << std::endl;
}