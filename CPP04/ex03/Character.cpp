/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:21:33 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/13 11:22:42 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;

    // std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character(Character const &src) : _name(src._name)
{
    *this = src;
    // std::cout << "Character " << this->_name << " created" << std::endl;
}

Character& Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
            {
				delete this->_inventory[i];
                this->_inventory[i] = NULL;
            }
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
    // std::cout << "Character " << this->_name << " destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
}

void    Character::equip(AMateria* m) 
{
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            // std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
            return;
        }
    std::cout << "Character " << this->_name << " can't carry anymore " << m->getType() << std::endl;
}

void    Character::unequip(int idx) 
{
    if (this->_inventory[idx])
    {
        this->_inventory[idx] = NULL;
        std::cout << "Character " << this->_name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
    if (this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
        // std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " say: JE nE pEUx PAs UtLisER." << std::endl;
}

std::string const& Character::getName() const
{
    return this->_name;
}

void Character::printMateria()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            std::cout << this->_inventory[i]->getType() << " ";    // type
            // std::cout << this->_inventory[i] << " ";               // ptr
        else
            std::cout << NULL << " ";
    }
    std::cout << std::endl;
}