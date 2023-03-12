/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:49:01 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 18:34:10 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

	private:
		std::string _name;
		AMateria    *_inventory[4];

	public:
		Character(std::string const &name);
		Character(Character const &src);
		~Character();

		Character&          operator=(Character const &src);

		std::string const&  getName() const;
		void                equip(AMateria* m);
		void                unequip(int idx);
		void                use(int idx, ICharacter& target);
		void				printMateria();
};

#endif