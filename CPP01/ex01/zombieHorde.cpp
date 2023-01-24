/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:30:54 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/23 23:31:15 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

	Zombie *zombieHorde = new Zombie[N];
	
	for (int i = 0; i < N ; i++)
		zombieHorde[i].set_name(name);
	
	return(zombieHorde);
}