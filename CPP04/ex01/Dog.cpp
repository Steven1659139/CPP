/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:35:41 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/10 16:47:15 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;

	std::cout << "Default Dog constructor call" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Default Dog destructor call" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	this->brain = new Brain;
	*this = rhs;
	
	std::cout << "Copy Dog constructor call" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->type = rhs.type;
	*this->brain = *rhs.brain;
	std::cout <<  "Copy Dog assignment operator call" << std::endl;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "WOUAF WOUAF" << std::endl;
}

Brain *Dog::getBrain() const
{
	return(this->brain);
}