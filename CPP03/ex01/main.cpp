/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:07 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 18:57:09 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "[CONSTRUCTOR]\n";

	ClapTrap Boris("Boris");
	ClapTrap Barnabé("Barnabé");
	ScavTrap Herménégilde("Herménégilde");
	ScavTrap Herménégilde2(Herménégilde);
	std::cout << std::endl;

	std::cout << "[STAT]\n";


	Boris.stat();
	Barnabé.stat();
	Herménégilde.stat();
	Herménégilde2.stat();
	std::cout << std::endl;

	std::cout << "[ACTION]\n";
	Herménégilde.guardGate();
	Herménégilde.attack("Boris");
	Boris.takeDamage(Herménégilde.getAttack());
	std::cout << std::endl;

	Boris.attack("Barnabé");
	Barnabé.takeDamage(Boris.getAttack());
	Boris.takeDamage(5);
	Boris.beRepaired(3);
	std::cout << std::endl;
	
	std::cout << "[STAT]\n";


	Boris.stat();
	Barnabé.stat();
	Herménégilde.stat();
	Herménégilde2.stat();
	std::cout << std::endl;

	std::cout << "[DESTRUCTOR]\n";
}