/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:07 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/02 16:41:53 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main()
{
	ClapTrap Boris("Boris ");

	// Boris.getAttack();
	// Boris.getEnergy();
	// Boris.getLife();
	Boris.see_stat();

	// ClapTrap Barnabé("Barnabé");
	// FragTrap Hurtubise("Hurtubise");
	// ScavTrap Herménégilde("Herménégilde");
	DiamondTrap Diamond("Diamond");
	Diamond.see_stat();




	// Hurtubise.highFivesGuys();
	// Hurtubise.attack("Herménégilde");
	// Herménégilde.takeDamage(Hurtubise.getAttack());
	// Herménégilde.guardGate();
	// Herménégilde.attack("Boris");
	// Boris.takeDamage(Herménégilde.getAttack());

	// Boris.attack("Barnabé");
	// Barnabé.takeDamage(Boris.getAttack());
	// Boris.takeDamage(5);
	// Boris.beRepaired(3);

}