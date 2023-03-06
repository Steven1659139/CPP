/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:05:09 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/06 16:46:54 by slavoie          ###   ########.fr       */
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
		DiamondTrap(DiamondTrap &rhs);
		DiamondTrap(std::string name);
		DiamondTrap &operator=(const DiamondTrap &rhs);
		~DiamondTrap();
		void whoAmI();

};

#endif