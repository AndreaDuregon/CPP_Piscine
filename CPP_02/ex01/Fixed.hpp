/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:09:14 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/29 18:45:57 by aduregon         ###   ########.fr       */
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
	Fixed(int const r);
	Fixed(Fixed const &copy);
	Fixed& operator = (Fixed const &copy);
	int		getRawBits() const;
	void	setRawBits(int const r);
	~Fixed();
};