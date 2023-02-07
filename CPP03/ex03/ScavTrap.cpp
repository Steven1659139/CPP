/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:14 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/07 14:03:33 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()// : ClapTrap("Default")
{
	this->_name = "Default ";
	// this->life_point = 100;
	// this->energy_point = 50;
	// this->attack_damage = 20;
	std::cout << "ScavTrap default constructor call" << std::endl;

}


ScavTrap::ScavTrap(std::string name)// : ClapTrap(name)
{
	// this->life_point = 100;
	// this->energy_point = 50;
	// this->attack_damage = 20;
	this->type = "ScavTrap ";

	std::cout << this->type << name << " has construct" << std::endl;



}

ScavTrap::ScavTrap(ScavTrap &rhs)
{
	*this = rhs;
	std::cout << this->type << "copy constructor call for "  << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << this->type << "copy assignment operator called for " << this->_name  << std::endl;
	this->attack_damage = rhs.attack_damage;
	this->energy_point = rhs.energy_point;
	this->life_point = rhs.life_point;
	return(*this);
}

// void ScavTrap::attack(std::string &target)
// {
// 	if (this->energy_point)
// 	{
// 		this->energy_point--;
// 		std::cout << << this->_name << " attacks " << target << ", causing "<< this->attack_damage << " points of damage!" << std::endl;
// 	}
// 	else
// 		std::cout << "not enough energy" <<  std::endl;

// }

ScavTrap::~ScavTrap()
{
	std::cout << this->type << this->_name << " destruct" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->type << this->_name << " enter in Gate keeper mode !" << std::endl;


}