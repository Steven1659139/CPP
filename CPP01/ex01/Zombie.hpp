/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:00:17 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/24 15:15:57 by slavoie          ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);

		void set_name(std::string name);
		void announce(void) const;
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif