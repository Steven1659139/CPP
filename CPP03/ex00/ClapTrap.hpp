/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 14:46:12 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int life_point;
		int energy_point;
		int attack_damage;
		void _dead();
		void _noEnergy();
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &rhs);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &rhs);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getAttack();
		int getLife();
		int getEnergy();
		void stat();
};

#endif