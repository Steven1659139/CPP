/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:06:13 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/09 15:47:14 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Gille("Gille", 150);
		Gille.decrementGrade();
		std::string name = "Gille2";
		Bureaucrat Gille2(name, 1);
		Gille2.incrementGrade();
	}
	catch(const std::exception& e)
	{
		// std::cout << e.what() << '\n';
		std::cerr << e.what() << '\n';
	}
	Bureaucrat Guy("Guy", 38);

	std::cout << Guy << std::endl;
}