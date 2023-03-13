/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:14 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "Default ";
	this->life_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	this->_type = "[ScavTrap] ";
	std::cout << "ScavTrap default constructor call" << std::endl;

}


ScavTrap::ScavTrap(std::string name)
{
	this->life_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	this->_type = "[ScavTrap] ";

	std::cout << this->_type << name << " has construct" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	*this = src;
	std::cout << this->_type << "copy constructor call for "  << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << this->_type << "copy assignment operator called for " << this->_name  << std::endl;
	this->attack_damage = src.attack_damage;
	this->energy_point = src.energy_point;
	this->life_point = src.life_point;
	return(*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy_point)
	{
		this->energy_point--;
		std::cout << this->_type << this->_name << " attacks " << target << ", causing "<< this->attack_damage << " points of damage!" << std::endl;
	}
	else
		ScavTrap::_noEnergy();

}

ScavTrap::~ScavTrap()
{
	std::cout << this->_type << this->_name << " destruct" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_type << this->_name << " enter in Gate keeper mode !" << std::endl;
}