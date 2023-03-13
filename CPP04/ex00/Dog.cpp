/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:35:41 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor call" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor call" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Copy Dog constructor call" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	this->type = src.type;
	std::cout <<  "Copy Dog assignment operator call" << std::endl;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "WOUAF WOUAF" << std::endl;
}