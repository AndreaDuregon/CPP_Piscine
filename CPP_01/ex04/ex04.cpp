/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 22:43:25 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 22:50:53 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	s;

	s = "HI THIS IS BRAIN";
	std::string *sPointer = &s;
	std::cout << *sPointer << " (POINTER)" << std::endl;
	std::string &sReference = s;
	std::cout << sReference << " (REFERENCE)" << std::endl;
}