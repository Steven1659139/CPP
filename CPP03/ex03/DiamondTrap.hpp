/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:05:09 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/03 12:43:39 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string _name;
		std::string _type;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		// setter
		void set_life();
		void set_energy();
		void set_type();
		void set_attack();
		void set_name(std::string);
		void whoAmI();
		DiamondTrap &operator=(const DiamondTrap &rhs);

};

#endif