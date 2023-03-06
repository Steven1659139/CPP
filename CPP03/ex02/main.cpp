/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:07 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/05 18:20:25 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	ClapTrap Boris("Boris");
	ClapTrap Barnabé("Barnabé");
	FragTrap Hurtubise("Hurtubise");
	ScavTrap Herménégilde("Herménégilde");

	Hurtubise.highFivesGuys();
	Hurtubise.attack("Herménégilde");
	Herménégilde.takeDamage(Hurtubise.getAttack());
	Herménégilde.guardGate();
	Herménégilde.attack("Boris");
	Boris.takeDamage(Herménégilde.getAttack());

	Boris.attack("Barnabé");
	Barnabé.takeDamage(Boris.getAttack());
	Boris.takeDamage(5);
	Boris.beRepaired(3);


}