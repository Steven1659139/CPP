/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:16:26 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/23 23:31:52 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void attack();
	private:
		std::string _name;
		Weapon& _weapon;
};