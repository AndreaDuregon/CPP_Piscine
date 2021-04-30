/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:09:28 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/30 11:55:17 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = n << this->fractBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = (int)(roundf(f * (1 << this->fractBits)));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw = copy.raw;
}

int		Fixed::getRawBits() const
{
	return (this->raw);
}

void	Fixed::setRawBits(int const r)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = r;
}

Fixed	&Fixed::operator = (Fixed const &op)
{
	std::cout << "Assignation operator called" << std::endl;
	this->raw = op.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	
	return ((float)this->raw / (float)(1 << this->fractBits));
}

int		Fixed::toInt(void) const
{
	return ((int)roundf(this->getRawBits()) >> this->fractBits);
}

std::ostream& operator << (std::ostream &o, Fixed const &f)
{
    o << f.toFloat();
    return (o);
}