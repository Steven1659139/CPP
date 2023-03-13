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

ScavTrap::ScavTrap(ScavTrap &src)
{
	*this = src;
	std::cout << this->type << "copy constructor call for "  << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->type = src.type;
	this->attack_damage = src.attack_damage;
	this->energy_point = src.energy_point;
	this->life_point = src.life_point;
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