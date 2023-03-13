/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:36:19 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/13 15:25:33 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Default Cat constructor call" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Default Cat destructor call" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Copy Cat constructor call" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	this->type = src.type;
	this->brain = src.brain;

	std::cout <<  "Copy Cat assignment operator call" << std::endl;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "BROU BROU" << std::endl;
}

Brain *Cat::getBrain() const
{
	return(this->brain);
}
