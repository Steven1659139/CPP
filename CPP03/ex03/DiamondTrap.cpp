/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:12:58 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/02 17:14:47 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
	this->_name = "Default_clap_name ";
	this->life_point = FragTrap::life_point;
	
}

DiamondTrap::DiamondTrap(std::string name) //: ScavTrap(name), FragTrap(name)
{	
	ScavTrap Scav(name);
	FragTrap Frag(name);

	this->energy_point = Scav.getEnergy();
	this->life_point = Frag.getLife();
	this->attack_damage = Frag.getAttack();
	// this->energy_point = ScavTrap::getEnergy();
	// this->life_point = FragTrap::getLife();
	// this->attack_damage = FragTrap::getAttack();
	this->_type = "DiamondTrap ";
	this->_name = name + "_clap_name";
	std::cout << this->_type << this->_name << " has construct" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_type << this->_name << " has destruct" << std::endl;
}

