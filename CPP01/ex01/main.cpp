/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:00:32 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/24 15:17:24 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int n = 5;

	Zombie* zombie_horde = zombieHorde(n, "Bertrand");
	for (int i = 0; i < n; i++)
		zombie_horde[i].announce();
	delete [] zombie_horde;
}