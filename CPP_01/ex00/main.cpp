/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:55:09 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/26 22:43:54 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main()
{
	Pony pony_stack;
	Pony *pony_heap;

	pony_stack = Pony("Exmoor", 145, 100, 15);
	pony_heap = new Pony("Shetland", 133, 112, 23);

	pony_stack.print_pony();
	pony_heap->print_pony();

	delete pony_heap;
}