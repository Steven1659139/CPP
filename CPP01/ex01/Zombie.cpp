/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:05:40 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/24 15:27:08 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Summoning undead" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " dying again" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

void Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}