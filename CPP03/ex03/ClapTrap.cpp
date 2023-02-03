/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:02 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/02 16:41:37 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Default ";
	this->attack_damage = 0;
	this->energy_point = 10;
	this->life_point = 10;
	this->type = "ClapTrap ";
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->attack_damage = 0;
	this->energy_point = 10;
	this->life_point = 10;
	this->type = "ClapTrap ";
	std::cout << this->type << "has constructor call for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->type << "destructor call for " << this->_name << std::endl;
}


ClapTrap::ClapTrap(ClapTrap &obj)
{
	*this = obj;
	std::cout << this->type << "copy constructor call for "  << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << this->type << "copy assignment operator called for " << this->_name  << std::endl;
	this->attack_damage = rhs.attack_damage;
	this->energy_point = rhs.energy_point;
	this->life_point = rhs.life_point;
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_point)
	{
		this->energy_point--;
		std::cout << this->type << this->_name << " attacks " << target << ", causing "<< this->attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "not enough energy" <<  std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->type << this->_name << " take " << amount << " points of damage !" << std::endl;
	this->life_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point)
	{
		std::cout << this->type << this->_name << " heal " << amount << " life points !" << std::endl;
		this->life_point += amount;
	}
	else
		std::cout << "not enough energy" << std::endl;
}

int ClapTrap::getAttack()
{
	return(this->attack_damage);
}

int ClapTrap::getLife()
{
	return(this->life_point);
}

int ClapTrap::getEnergy()
{
	return(this->energy_point);
}

void ClapTrap::see_stat()
{
	std::cout << "___________________________________\n";
	std::cout << "Type\tName\tLife\tEnergy\tDamage\n"; 
	std::cout << this->type  << this->_name << this->life_point << "\t" << this->energy_point << "\t" << this->getAttack() << std::endl;
	std::cout << "___________________________________\n";

}