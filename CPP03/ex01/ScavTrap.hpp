/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:17 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/01 15:24:36 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAV_LIFE = 100;
#define SCAV_ENERGY = 50;
#define SCAV_ATTACK = 20;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &rhs);
		ScavTrap &operator=(const ScavTrap &rhs);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
};
#endif