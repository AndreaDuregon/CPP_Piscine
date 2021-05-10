/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 00:53:10 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/10 10:17:40 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	std::list<T>	stack;
public:
	MutantStack<T>(/* args */)	{}
	MutantStack<T>(MutantStack const &copy)
	{
		this->stack = copy.stack;
	}
	MutantStack &operator = (MutantStack const &op)
	{
		this->stack = op.getStack();
		return (*this);
	}
	~MutantStack<T>()	{}
	std::list<T>	getStack() const
	{
		return (this->stack);
	}
	bool	empty()
	{
		return (this->stack.empty());
	}
	size_t	size()
	{
		return (this->stack.size());
	}
	T		&top()
	{
		return (this->stack.front());
	}
	void	push(T t)
	{
		return (this->stack.push_front(t));
	}
	void	pop()
	{
		return (this->stack.pop_front());
	}

	typedef typename std::list<T>::iterator		iterator;

	iterator		begin()
	{
		return (this->stack.begin());
	}
	iterator		end()
	{
		return (this->stack.end());
	}
};

