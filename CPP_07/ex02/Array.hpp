/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:44:53 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 16:49:14 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<class T>
class Array
{
private:
	T	*array;
	int	dim;
public:
	Array(/* args */)
	{
		this->array = new T[0];
		this->dim = 0;
	}

	Array(unsigned int n)
	{
		this->array = new T[n]();
		this->dim = n;
	}

	Array(Array const &copy)
	{
		this->array = new T[copy.dim];
		this->dim = copy.dim;
		for (int i = 0; i < this->dim; i++)
			this->array[i] = copy.array[i];
	}

	Array	&operator = (Array const &op)
	{
		if (this == &op)
			return (*this);
		this->array = new T[op.getDim()];
		this->dim = op.getDim();
		for (int i = 0; i < this->dim; i++)
			this->array[i] = op.getArrayCont(i);
	}

	~Array()	{}
	
	T		*getArray() const
	{
		return (this->array);
	}

	T		getArrayCont(int i)
	{
		return (this->array[i]);
	}

	int		getDim()
	{
		return (this->dim);
	}

	T		&operator [] (unsigned int i)
	{
		if (i >= this->size())
			throw OutOfBoundException();
		return (this->array[i]);
	}

	unsigned int		size() const
	{
		return (this->dim);
	}

	class OutOfBoundException : public std::exception
	{
		public:
		OutOfBoundException() throw()	{}
		virtual const char	*what() const throw()
		{
			return ("\033[0;31mOut of the limits\033[0m");
		}
	};
};

