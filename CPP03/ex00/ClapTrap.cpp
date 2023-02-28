/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:02 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 18:59:06 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor call" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor call" << std::endl;
	this->_name = name;
	this->attack_damage = 0;
	this->energy_point = 10;
	this->life_point = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor call" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &rhs)
{
	*this = rhs;
	std::cout << "Copy constructor call" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->attack_damage = rhs.attack_damage;
	this->energy_point = rhs.energy_point;
	this->life_point = rhs.life_point;
	return(*this);
}

void ClapTrap::stat()
{
	std::cout << "Name: " << this->_name << " Attack: " << this->getAttack() << " Energy: " << this->getEnergy() << " Life: " << this->getLife() << std::endl;
}

void ClapTrap::_dead()
{
	std::cout << "ClapTrap " << this->_name << " cannot make action, he's dead !" << std::endl;
}

void ClapTrap::_noEnergy()
{
	std::cout<< this->_name << " not enough energy to make action" <<  std::endl;
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
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "<< this->attack_damage << " points of damage!" << std::endl;
	}
	else
		this->_noEnergy();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getLife() <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot take more damage !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage !" << std::endl;
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
		std::cout << "ClapTrap " << this->_name << " heal " << amount << " life points !" << std::endl;
		this->life_point += amount;
	}
	else
		this->_noEnergy();
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