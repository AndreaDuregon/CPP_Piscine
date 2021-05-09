/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:30:50 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/10 00:42:19 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()	{}

Span::Span(unsigned int N)
{
	this->array.reserve(N);
	this->n = N;
}

Span::Span(Span const & copy)
{
	this->array = copy.array;
	this->n = copy.n;
}

Span	&Span::operator = (Span const &op)
{
	if (this == &op)
		return (*this);
	this->array = op.getArray();
	this->n = op.getN();
	return (*this);
}

Span::~Span()	{}

std::vector<int>	Span::getArray() const
{
	return (this->array);
}

unsigned int		Span::getN() const
{
	return (this->n);
}

void				Span::addNumber(int n)
{
	if (this->n == this->array.size())
		throw ArrayFullException();
	this->array.push_back(n);
}

int					Span::shortestSpan()
{
	if (this->array.size() < 2)
		throw ArrayTooShortException();

	std::vector<int>	temp = this->array;
	int minSpan;
	std::vector<int>::iterator it = temp.begin();

	sort(temp.begin(), temp.end());
	minSpan = it[1] - it[0];
	for(unsigned int i = 0; i < temp.size() - 1; i++)
	{
		if (it[i + 1] - it[i] < minSpan)
			minSpan = it[i + 1] - it[i];
	}
	return (minSpan);
}

int					Span::longestSpan()
{
	if (this->array.size() < 2)
		throw ArrayTooShortException();
	return (*std::max_element(this->array.begin(), this->array.end()) - *std::min_element(this->array.begin(), this->array.end()));
}

void				Span::addValues()
{
	std::srand(time(NULL));
	for (unsigned int i = 0; i < this->n; i++)
		this->array.push_back(rand() % 2147483647);
}

Span::ArrayFullException::ArrayFullException() throw()	{}

const char			*Span::ArrayFullException::what() const throw()
{
	return ("Array full!");
}

Span::ArrayTooShortException::ArrayTooShortException() throw()	{}

const char			*Span::ArrayTooShortException::what() const throw()
{
	return ("Array too short!");
}