/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:26 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/05 18:25:35 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor call" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->life_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	this->type = "FragTrap ";

	std::cout << this->type << name << " has construct" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->type << this->_name << " destruct" << std::endl;
}

FragTrap::FragTrap(FragTrap &rhs)
{
	*this = rhs;
	std::cout << this->type << "copy constructor call for"  << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	this->_name = rhs._name;
	this->type = rhs.type;
	this->attack_damage = rhs.attack_damage;
	this->energy_point = rhs.energy_point;
	this->life_point = rhs.life_point;
	std::cout << this->type << "copy assignment operator called for " << this->_name  << std::endl;
	return(*this);

}

void FragTrap::highFivesGuys()
{
	std::cout << this->type << this->_name << " want a high fives !" << std::endl;
}