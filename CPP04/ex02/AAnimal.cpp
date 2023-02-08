/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:59:52 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/08 11:17:48 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal constructor call" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor call" << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	*this = rhs;
	std::cout << "Copy AAnimal constructor call" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	this->type = rhs.type;
	std::cout <<  "Copy AAnimal assignment operator call" << std::endl;
	return(*this);
}

void AAnimal::makeSound() const
{
	std::cout << "* medley of aanimals sounds *" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}