/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:20:41 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/19 19:49:08 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	
	return(newZombie);
}

void randomChump( std::string name ){


	Zombie newZombie = Zombie(name);

	newZombie.announce();
}