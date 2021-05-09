/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:30:56 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/10 00:47:40 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "\033[0;32mSUBJECT MAIN\033[0m" << std::endl;
	Span sp1 = Span(5);
	sp1.addNumber(5);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "\033[0;32mSMART MAIN\033[0m" << std::endl;
	Span sp = Span(1000);
	sp.addValues();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}