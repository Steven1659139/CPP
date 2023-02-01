/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/01 17:54:57 by slavoie          ###   ########.fr       */
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
		std::string type;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &obj);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getAttack();
		int getLife();
		int getEnergy();
};
#endif
