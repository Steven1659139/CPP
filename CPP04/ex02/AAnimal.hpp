/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:00:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
		std::string name;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		std::string getType() const;
		virtual void makeSound() const = 0;
};

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(std::string name);
		~Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		void makeSound() const;
	private:
		Brain *brain;
};

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(std::string name);
		~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		void makeSound() const;
		private:
			Brain *brain;

};