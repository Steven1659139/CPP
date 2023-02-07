/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:00:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/06 12:44:22 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
	protected:
		std::string type;

	Animal();
	~Animal();
	Animal(const Animal &rhs);
	Animal &operator=(const Animal &rhs);
};

class Dog : public Animal
{
	Dog();
	~Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);
};

class Cat : public Animal
{
	Cat();
	~Cat();
	Cat(const Cat &rhs);
	Cat &operator=(const Cat &rhs);
};