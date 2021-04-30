/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:09:14 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/30 09:14:12 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					rawBits;
	static const int	fractBits = 8;
public:
	Fixed(/* args */);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const &copy);
	Fixed& operator = (Fixed const &copy);
	int		getRawBits() const;
	void	setRawBits(int const r);
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);