/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:06:13 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/09 19:18:40 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	// try
	// {
	// 	Bureaucrat Gille("Gille", 150);
	// 	Gille.decrementGrade();
	// 	std::string name = "Gille2";
	// 	Bureaucrat Gille2(name, 1);
	// 	Gille2.incrementGrade();
	// }
	// catch(const std::exception& e)
	// {
	// 	// std::cout << e.what() << '\n';
	// 	std::cerr << e.what() << '\n';
	// }
	// Bureaucrat Guy("Guy", 1);
	Bureaucrat Gille("Gille", 38);

	// std::cout << Guy << std::endl;

	// Form RT4("RT4", 4, 8);


	// RT4.beSigned(Guy);
	// Gille.signForm(RT4);
	// std::cout << RT4 << std::endl;
	// Guy.signForm(RT4);
	// std::cout << RT4 << std::endl;


	ShrubberyCreationForm form1;
	std::cout << form1 << std::endl;

	Gille.signForm(form1);




}