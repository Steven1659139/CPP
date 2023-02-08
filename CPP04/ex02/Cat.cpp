/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:36:19 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/08 11:17:48 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Default Cat constructor call" << std::endl;
}

Cat::Cat(std::string name)
{
	this->brain = new Brain;

	this->type = "Cat";
	this->name = name;

}

Cat::~Cat()
{
	delete this->brain;
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
	this->brain = rhs.brain;

	std::cout <<  "Copy Cat assignment operator call" << std::endl;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "BROU BROU" << std::endl;
}
