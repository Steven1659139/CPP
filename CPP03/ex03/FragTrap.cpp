/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:26 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/07 14:03:07 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()// : ClapTrap("Default")
{
	this->_name = "Default ";
	// this->life_point = 100;
	// this->energy_point = 100;
	// this->attack_damage = 30;
	std::cout << "FragTrap default constructor call" << std::endl;

}

FragTrap::FragTrap(std::string name)// : ClapTrap(name)
{
	// this->life_point = 100;
	// this->energy_point = 100;
	// this->attack_damage = 30;
	this->type = "FragTrap ";

	std::cout << this->type << name << " has construct" << std::endl;
}

FragTrap::FragTrap(FragTrap &rhs)
{
	*this = rhs;
	std::cout << this->type << "copy constructor call for "  << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << this->type << "copy assignment operator called for " << this->_name  << std::endl;
	this->attack_damage = rhs.attack_damage;
	this->energy_point = rhs.energy_point;
	this->life_point = rhs.life_point;
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << this->type << this->_name << " destruct" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->type << this->_name << " want a high fives !" << std::endl;


}