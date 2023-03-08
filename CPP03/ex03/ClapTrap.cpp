/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:02 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/08 12:16:44 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Default ";
	this->attack_damage = 0;
	this->energy_point = 10;
	this->life_point = 10;
	this->_type = "[ClapTrap] ";
	std::cout << "ClapTrap default constructor call" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->attack_damage = 0;
	this->energy_point = 10;
	this->life_point = 10;
	this->_type = "[ClapTrap] ";
	std::cout << this->_type << "has constructor call for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_type << "destructor call for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	*this = obj;
	std::cout << this->_type << "copy constructor call for "  << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << this->_type << "copy assignment operator called for " << this->_name  << std::endl;
	this->attack_damage = rhs.attack_damage;
	this->energy_point = rhs.energy_point;
	this->life_point = rhs.life_point;
	return(*this);
}

void ClapTrap::_dead()
{
	std::cout << this->_type <<  this->_name << " cannot make action, he's dead !" << std::endl;
}

void ClapTrap::_noEnergy()
{
	std::cout << this->_type << this->_name << " not enough energy to make action" <<  std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getLife() <= 0)
	{
		this->_dead();
		return ;
	}
	if (this->energy_point)
	{
		this->energy_point--;
		std::cout << this->_type << this->_name << " attacks " << target << ", causing "<< this->attack_damage << " points of damage!" << std::endl;
	}
	else
		_noEnergy();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getLife() <= 0)
	{
		std::cout << this->_type << this->_name << " cannot take more damage !" << std::endl;
		return ;
	}
	std::cout << this->_type << this->_name << " take " << amount << " points of damage !" << std::endl;
	this->life_point -= amount;
	if (life_point < 0)
		this->life_point = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getLife() <= 0)
	{
		this->_dead();
		return ;
	}
	if (this->energy_point)
	{
		std::cout << this->_type << this->_name << " heal " << amount << " life points !" << std::endl;
		this->life_point += amount;
	}
	else
		_noEnergy();
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

void ClapTrap::stat()
{
	std::cout << "___________________________________\n";
	std::cout << "Type\tName\tLife\tEnergy\tDamage\n"; 
	std::cout << this->_type  << this->_name << " " << this->life_point << "\t" << this->energy_point << "\t" << this->getAttack() << std::endl;
	std::cout << "___________________________________\n";
}