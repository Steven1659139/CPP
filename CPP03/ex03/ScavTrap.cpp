/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:14 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/02 16:37:58 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
	this->_name = "Default ";
	this->life_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
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
	std::cout << this->type << this->_name << " destruct" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->type << this->_name << " enter in Gate keeper mode !" << std::endl;


}