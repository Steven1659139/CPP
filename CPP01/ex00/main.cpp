/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:29:20 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/24 12:37:41 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* Gille = newZombie("Gille");
	Zombie Robert("Robert");

	Robert.announce();
	Gille->announce();
	randomChump("Roger");

	delete Gille;
	return 0;
}