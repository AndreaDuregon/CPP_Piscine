/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:09:28 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/30 09:15:01 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(int const n)
{
	this->rawBits = n << this->fractBits;
}

Fixed::Fixed(float const f)
{
	this->rawBits = (int)(roundf(f * (1 << this->fractBits)));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->rawBits = copy.rawBits;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void	Fixed::setRawBits(int const r)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = r;
}

Fixed	&Fixed::operator = (Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return ((float)this->rawBits / (float)(1 << this->fractBits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->rawBits >> this->fractBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return (out);
}