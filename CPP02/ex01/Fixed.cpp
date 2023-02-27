/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 08:14:13 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 18:02:24 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : value(n << Fixed::fractionalBits) 
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : value(n * (1 << Fixed::fractionalBits)) 
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs) 
{
	std::cout << "Copy assignment operator called " << std::endl;

	this->value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->value;
} 

void Fixed::setRawBits(int raw)
{
	this->value = raw; 
}

float Fixed::toFloat(void) const
{
	return((float)this->getRawBits() / (1 << 8));
}

int	Fixed::toInt(void) const
{
	return((int)this->value >> this->fractionalBits);
}

std::ostream& operator<<(std::ostream& output, const Fixed& rhs)
{
	output << rhs.toFloat();
	return (output);
}