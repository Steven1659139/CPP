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
	this->life_point = FragTrap::life_point;
	
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{	
	// ScavTrap Scav(name);
	// FragTrap Frag(name);

	// this->energy_point = Scav.getEnergy();
	// this->life_point = Frag.getLife();
	// this->attack_damage = Frag.getAttack();
	this->_type = "DiamondTrap ";
	// this->_name = name + "_clap_name";
	this->energy_point = ScavTrap::ENERGY;
	this->life_point = FragTrap::HIT_POINT;
	this->attack_damage = FragTrap::DAMAGE;
	std::cout << this->_type << this->_name << " has construct" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_type << this->_name << " has destruct" << std::endl;
}

// void DiamondTrap::attack(std::string &target)
// {
// 	ScavTrap::attack(target);
// }

void DiamondTrap::set_life()
{
	this->life_point = FragTrap::life_point;
}
void DiamondTrap::set_energy()
{
	// this->energy_point = ScavTrap::energy_point;
}
void DiamondTrap::set_type()
{
	this->type = "DiamondTrap";
}
void DiamondTrap::set_attack()
{
	// this->attack_damage = FragTrap::attack_damage;
}
void DiamondTrap::set_name(std::string name)
{
	this->_name = name;
}

void DiamondTrap::whoAmI()
{
	
}

// DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
// {
// 	std::cout << this->type << "copy assignment operator called for " << this->_name  << std::endl;
// 	this->attack_damage = rhs.attack_damage;
// 	this->energy_point = rhs.energy_point;
// 	this->life_point = rhs.life_point;
// 	return(*this);
// }
