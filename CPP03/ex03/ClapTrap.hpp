/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/08 12:02:07 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int life_point;
		int energy_point;
		int attack_damage;
		std::string _type;
		void _dead();
		void _noEnergy();
		ClapTrap();

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &rhs);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getAttack();
		int getLife();
		int getEnergy();
		void stat();
};
#endif
