/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:59:52 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/10 16:12:55 by slavoie          ###   ########.fr       */
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

Animal::Animal(const Animal &rhs)
{
	*this = rhs;
	std::cout << "Copy Animal constructor call" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
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
