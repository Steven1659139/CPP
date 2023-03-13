/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:57:30 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
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
		std::string _type;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		~FragTrap();
		FragTrap &operator=(const FragTrap &src);
		void highFivesGuys(void);
};

#endif