/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:14 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 14:56:55 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor call" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->life_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	this->type = "ScavTrap ";

	std::cout << this->type << name << " has construct" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destruct" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &rhs)
{
	*this = rhs;
	std::cout << this->type << "copy constructor call for "  << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->type = rhs.type;
	this->attack_damage = rhs.attack_damage;
	this->energy_point = rhs.energy_point;
	this->life_point = rhs.life_point;
	std::cout << this->type << "copy assignment operator called for " << this->_name  << std::endl;
	return(*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " enter in Gate keeper mode !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getLife() <= 0)
	{
		this->_dead();
		return ;
	}
	if (this->energy_point)
	{
		this->energy_point--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "<< this->attack_damage << " points of damage!" << std::endl;
	}
	else
		this->_noEnergy();
}