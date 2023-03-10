/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:47:24 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/01 17:42:58 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string name);
		~Weapon();
		const std::string& getType();
		void setType(std::string new_value);
	private:
		std::string _type;
};

#endif