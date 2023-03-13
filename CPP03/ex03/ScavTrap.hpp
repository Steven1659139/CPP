/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:17 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	protected:
		const static int HIT_POINTS = 100;
		const static int ENERGY = 50;
		const static int DAMAGE = 20;
		std::string _type;
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &src);
		void attack(const std::string &target);
		void guardGate();
};
#endif