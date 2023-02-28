/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:25:07 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 18:33:14 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Boris("Boris");

	Boris.takeDamage(3);

	ClapTrap Barnabé("Barnabé");
	ClapTrap Boris2(Boris);

	Boris.stat();
	Boris2.stat();
	Barnabé.stat();
	std::cout << "\n";

	Boris.attack("Barnabé");
	Barnabé.takeDamage(Boris.getAttack());
	Boris.takeDamage(5);
	Boris.beRepaired(3);
	std::cout << "\n";

	while(Boris.getEnergy() > 0)
	{
		Boris.attack("Barnabé");
	}
	Boris.attack("Barnabé");
	Boris.beRepaired(3);
	std::cout << "\n";

	while(Boris.getLife() > 0)
	{
		Boris.takeDamage(1);
	}
	Boris.takeDamage(1);
	Boris.attack("Barnabé");
	Boris.beRepaired(4);
	Boris2.beRepaired(2);
	std::cout << "\n";

	Boris.stat();
	Boris2.stat();
	Barnabé.stat();
	std::cout << "\n";

	return 0;
}