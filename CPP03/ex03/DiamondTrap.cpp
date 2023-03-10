// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:12:58 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/03 12:32:26 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
	this->_name = "Default_clap_name ";
	this->energy_point = ScavTrap::ENERGY;
	this->life_point = FragTrap::HIT_POINT;
	this->attack_damage = FragTrap::DAMAGE;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
	*this = src;
	std::cout << "Copy constructor call" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{	
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_type = "DiamondTrap ";
	this->energy_point = ScavTrap::ENERGY;
	this->life_point = FragTrap::HIT_POINT;
	this->attack_damage = FragTrap::DAMAGE;
	std::cout << this->_type << this->_name << " has construct" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_type << this->_name << " has destruct" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am a DiamondTrap and my name is " << this->_name << ". My ClapTrap name is " << ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	this->_name = src._name;
	std::cout << this->_type << "copy assignment operator called for " << this->_name  << std::endl;
	this->_type = src._type;
	this->attack_damage = src.attack_damage;
	this->energy_point = src.energy_point;
	this->life_point = src.life_point;
	return(*this);
}

void DiamondTrap::stat()
{
	std::cout << "___________________________________\n";
	std::cout << "Type\t\tName\tLife\tEnergy\tDamage\n"; 
	std::cout << this->_type  << this->_name << " " << this->life_point << "\t" << this->energy_point << "\t" << this->getAttack() << std::endl;
	std::cout << "___________________________________\n";
}
