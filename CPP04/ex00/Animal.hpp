/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:00:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
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
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		std::string getType() const;
		virtual void makeSound() const;
};

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		void makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		void makeSound() const;
};