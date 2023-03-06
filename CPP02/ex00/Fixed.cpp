/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:40:59 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/06 14:53:31 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) 
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called " << std::endl;
	return this->value;
} 

void Fixed::setRawBits(int const raw)
{
	this->value = raw; 
}