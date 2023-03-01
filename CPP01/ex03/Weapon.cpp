/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:51:39 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/01 17:42:39 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
	std::string& weaponREF = Weapon::_type;
	return(weaponREF);
}

void	Weapon::setType(std::string new_value)
{
	Weapon::_type = new_value;
}