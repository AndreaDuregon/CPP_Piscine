/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:09:14 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/30 12:21:23 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
	int					raw;
	static const int	fractBits = 8;
public:
	Fixed(/* args */);
	Fixed(Fixed const &copy);
	Fixed& operator = (Fixed const &copy);
	int		getRawBits(void) const;
	void	setRawBits(int const r);
	~Fixed();
};