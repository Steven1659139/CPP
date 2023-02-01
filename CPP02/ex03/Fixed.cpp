/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:06 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/27 19:51:54 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() : value(0) 
{
	std::cout << "Default Fixed constructor call" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy Fixed constructor call" << std::endl;
	*this = rhs;
}

Fixed::Fixed(const int n) : value(n << Fixed::fractionalBits) 
{
	std::cout << "Int Fixed constructor call" << std::endl;
}

Fixed::Fixed(const float n) : value(n * (1 << Fixed::fractionalBits)) 
{
	std::cout << "Float Fixed constructor call" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Default Fixed destructor call" << std::endl;

}

Fixed& Fixed::operator=(const Fixed &rhs) 
{
	std::cout << "Assignation Fixed call" << std::endl;
	this->value = rhs.value;
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

std::ostream& operator<<(std::ostream& output, const Fixed& Fix)
{
	output << Fix.toFloat();
	return (output);
}

bool Fixed::operator> (const Fixed& rhs) const
{
	return(this->value > rhs.value);
}

bool Fixed::operator< (const Fixed& rhs) const
{
	return(this->value < rhs.value);
}

bool Fixed::operator>= (const Fixed& rhs) const
{
	return(this->value >= rhs.value);
}

bool Fixed::operator<= (const Fixed& rhs) const
{
	return(this->value <= rhs.value);
}

bool Fixed::operator== (const Fixed& rhs) const
{
	return(this->value == rhs.value);
}

bool Fixed::operator!= (const Fixed& rhs) const
{
	return(this->value != rhs.value);
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
	return(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	return(this->toFloat() - rhs.toFloat());

}
Fixed Fixed::operator*(const Fixed& rhs) const
{
	return(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	return(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++()
{
	++this->value;
	return(*this);
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->value++;
	return(temp);
}

Fixed& Fixed::operator--()
{
	--this->value;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->value--;
	return(temp);
}

Fixed &Fixed::min(Fixed &F1, Fixed &F2)
{
	if (F1 < F2)
		return(F1);
	else
		return(F2);

}
const Fixed &Fixed::min(Fixed const &F1, Fixed const &F2)
{
	if (F1 < F2)
		return(F1);
	else
		return(F2);
}

Fixed &Fixed::max(Fixed &F1, Fixed &F2)
{
	if (F1 > F2)
		return(F1);
	else
		return(F2);
}

const Fixed &Fixed::max(Fixed const &F1, Fixed const &F2)
{
	if (F1 > F2)
		return(F1);
	else
		return(F2);
}
