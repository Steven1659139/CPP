/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:10:24 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
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
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &src);
		std::string getType() const;
		virtual void makeSound() const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string name);
		~WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &src);
		void makeSound() const;
};
