/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:29:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 23:24:56 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

class NotFindException : public std::exception
{
public:
	NotFindException() throw() {}
	const char *what() const throw()
	{
		return ("Value not find!");
	}
};

template<typename T>
int		easyfind(T cont, int n)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw NotFindException();
	return (*it);
}
