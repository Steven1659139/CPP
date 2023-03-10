/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:00:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/10 15:05:27 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &rhs);
		Animal &operator=(const Animal &rhs);
		std::string getType() const;
		virtual void makeSound() const;
};

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		void makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		void makeSound() const;
};