/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:30 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/06 16:50:05 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		const static int HIT_POINT = 100;
		const static int ENERGY = 100;
		const static int DAMAGE = 30;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &rhs);
		~FragTrap();
		FragTrap &operator=(const FragTrap &rhs);

		void highFivesGuys(void);
};

#endif