/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:07 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/01 15:39:18 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap Boris("Boris");
	ClapTrap Barnabé("Barnabé");
	
	ScavTrap Herménégilde("Herménégilde");

	Herménégilde.guardGate();
	Herménégilde.attack("Boris");
	Boris.takeDamage(Herménégilde.getAttack());

	Boris.attack("Barnabé");
	Barnabé.takeDamage(Boris.getAttack());
	Boris.takeDamage(5);
	Boris.beRepaired(3);
}