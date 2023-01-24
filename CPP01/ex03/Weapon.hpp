/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:47:24 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/23 18:43:25 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{

	public:
		Weapon(std::string name);
		~Weapon();

		std::string& getType();
		void setType(std::string new_value);

	private:
		std::string _type;
};

#endif