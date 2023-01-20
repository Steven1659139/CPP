/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:10:56 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/20 16:06:26 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ): name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " dying again" << std::endl;
}

void Zombie::announce(void) const{

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::announce(void) const{

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

