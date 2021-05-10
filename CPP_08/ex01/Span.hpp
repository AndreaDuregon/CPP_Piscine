/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:30:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/10 10:12:11 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	unsigned int		n;
	std::vector<int>	array;
public:
	Span(/* args */);
	Span(unsigned int N);
	Span(Span const &copy);
	Span &operator = (Span const &op);	
	~Span();
	std::vector<int>	getArray() const;
	unsigned int		getN() const;
	void				addNumber(int n);
	int					shortestSpan();
	int					longestSpan();
	void				addValues();

	class ArrayFullException : public std::exception
	{
	public:
		ArrayFullException() throw();
		virtual const char *what() const throw();
	};

	class ArrayTooShortException : public std::exception
	{
	public:
		ArrayTooShortException() throw();
		virtual const char *what() const throw();
	};
};
