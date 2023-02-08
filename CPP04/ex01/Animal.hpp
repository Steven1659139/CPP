/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:00:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/08 10:59:59 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
		std::string name;
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
		Dog(std::string name);
		~Dog();
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		void makeSound() const;
	private:
		Brain *brain;
};

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string name);
		~Cat();
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		void makeSound() const;
		private:
			Brain *brain;

};