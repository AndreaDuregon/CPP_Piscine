/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:09:14 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/30 12:22:23 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					raw;
	static const int	fractBits = 8;
public:
	Fixed(/* args */);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const &copy);
	Fixed& operator = (Fixed const &op);
	int		getRawBits(void) const;
	void	setRawBits(int const r);
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed();
};

std::ostream& operator << (std::ostream &o, Fixed const &f);