/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:53:43 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/13 11:52:40 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	// std::cout << "[BASIC TEST]" << std::endl;

	MateriaSource* const src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* const me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// unequip all
	// me->unequip(0);
	// me->unequip(1);
	std::cout << tmp->getType() << " existe toujours" << std::endl;

	// unequip same
	// me->unequip(0);
	// me->unequip(0);

	// MateriaSource deep copy 
	MateriaSource *src2 = new MateriaSource(*src);
	src->printMateria();
	src2->printMateria();

	// Character deep copy
	Character *me2 = new Character(*me);
	me->printMateria();
	me2->printMateria();
	// me2 = me;

	// Materia non valid
	tmp = src->createMateria("fdsgddfgd");

	Character* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete me2;
	delete src;
	delete src2; 
	


	return 0;
}