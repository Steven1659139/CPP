/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:59:52 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor call" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor call" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Copy Animal constructor call" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	this->type = src.type;
	std::cout <<  "Copy Animal assignment operator call" << std::endl;
	return(*this);
}

void Animal::makeSound() const
{
	std::cout << "* medley of animals sounds *" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
