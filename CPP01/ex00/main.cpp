/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:29:20 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/20 14:56:27 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

	Zombie* Gille = newZombie("Gille");
	Zombie Robert("Robert");

	Robert.announce();
	Gille->announce();

	randomChump("Roger");

	delete Gille;

	return 0;




}