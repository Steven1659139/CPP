/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:36:19 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/10 15:03:07 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor call" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor call" << std::endl;
}

Cat::Cat(const Cat &rhs)
{
	*this = rhs;
	std::cout << "Copy Cat constructor call" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->type = rhs.type;
	std::cout <<  "Copy Cat assignment operator call" << std::endl;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "BROU BROU" << std::endl;
}
