/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:10:24 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/10 14:21:04 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class WrongAnimal
{
	protected:
		std::string type;
		std::string name;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		std::string getType() const;
		virtual void makeSound() const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string name);
		~WrongCat();
		WrongCat(const WrongCat &rhs);
		WrongCat &operator=(const WrongCat &rhs);
		void makeSound() const;
};
