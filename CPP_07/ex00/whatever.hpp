/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:37:28 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/09 17:46:06 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	swap(T &t1, T &t2)
{
	T temp = t1;

	temp = t1;
	t1 = t2;
	t2 = temp;
}

template <typename T>
T		min(T &t1, T &t2)
{
	if (t1 < t2)
		return (t1);
	else
		return (t2);
}

template <typename T>
T		max(T &t1, T &t2)
{
	if (t1 > t2)
		return (t1);
	else
		return (t2);
}
