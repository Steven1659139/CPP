/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:00:17 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/24 12:34:31 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <stdlib.h> 
#include <iostream>

class Zombie
{
	public:
		Zombie( std::string name);
		~Zombie(void);

		void announce(void) const;
	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif