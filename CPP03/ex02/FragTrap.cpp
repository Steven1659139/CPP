/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:26 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap &src)
{
	*this = src;
	std::cout << this->type << "copy constructor call for "  << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	this->_name = src._name;
	this->type = src.type;
	this->attack_damage = src.attack_damage;
	this->energy_point = src.energy_point;
	this->life_point = src.life_point;
	std::cout << this->type << "copy assignment operator called for " << this->_name  << std::endl;
	return(*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << this->type << this->_name << " want a high fives !" << std::endl;
}