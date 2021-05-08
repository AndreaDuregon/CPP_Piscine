/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:37:39 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 21:04:14 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	int		a = 10;
	int		b = 100;
	double	c = 9.9;
	double	d = 5.5;
	char	e = 'a';
	char	f = 'z';

	std::cout << "\033[1;37m-------- SWP --------\033[0m" << std::endl;
	std::cout << "a: " << a << " b: " << b << " ---> ";
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "c: " << c << " d: " << d << " ---> ";
	swap(c, d);
	std::cout << "c: " << c << " d: " << d << std::endl;
	std::cout << "e: " << e << " f: " << f << " ---> ";
	swap(e, f);
	std::cout << "e: " << e << " f: " << f << std::endl;
	std::cout << "\033[1;37m-------- MIN --------\033[0m" << std::endl;
	a = 10;
	b = 15;
	c = 10.9;
	d = 10.7;
	e = 'a';
	f = 'b';
	std::cout << "min(10, 5):  " << min(a, b) << std::endl;
	b = 15;
	std::cout << "min(10, 15): " << min(a, b) << std::endl;
	b = 10;
	std::cout << "min(10, 10): " << min(a, b) << std::endl;
	std::cout << "min(10.9, 10.7): " << min(c, d) << std::endl;
	std::cout << "min('a', 'b'): " << min(e, f) << std::endl;
	std::cout << "\033[1;37m-------- MAX --------\033[0m" << std::endl;
	b = 5;
	std::cout << "max(10, 5): " << max(b, a) << std::endl;
	b = 15;
	std::cout << "max(10, 15): " << max(b, a) << std::endl;
	b = 10;
	std::cout << "max(10, 10): " << max(b, a) << std::endl;
	std::cout << "max(10.9, 10.7): " << max(d, c) << std::endl;
	std::cout << "max('a', 'b'): " << max(f, e) << std::endl;
}