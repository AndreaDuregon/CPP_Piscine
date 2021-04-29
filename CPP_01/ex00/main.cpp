/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:55:09 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/29 11:49:27 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap()
{
	return (new Pony("Shetland", 133, 112, 23));
}

Pony	ponyOnTheStack()
{
	return (Pony("Exmoor", 145, 100, 15));
}

int	main()
{
	Pony pony_stack;
	Pony *pony_heap;

	pony_stack = ponyOnTheStack();
	pony_heap = ponyOnTheHeap();

	pony_stack.print_pony();
	pony_heap->print_pony();

	delete pony_heap;
}