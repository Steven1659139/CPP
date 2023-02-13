/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:06:13 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/13 14:59:20 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	Bureaucrat Gille("Gille", 1);

	// std::cout << Guy << std::endl;

	// Form RT4("RT4", 4, 8);


	// RT4.beSigned(Guy);
	// Gille.signForm(RT4);
	// std::cout << RT4 << std::endl;
	// Guy.signForm(RT4);
	// std::cout << RT4 << std::endl;

	std::string str = "garden";

	ShrubberyCreationForm *form1 = new ShrubberyCreationForm(str);
	RobotomyRequestForm *Robot = new RobotomyRequestForm("Robot");
	PresidentialPardonForm *Steve = new PresidentialPardonForm("Steve");
	std::cout << *form1 << std::endl;
	std::cout << *Robot << std::endl;
	std::cout << *Steve << std::endl;

	Gille.signForm(*form1);
	Gille.signForm(*Robot);
	Gille.signForm(*Steve);

	Gille.executeForm(*form1);
	Gille.executeForm(*Robot);
	Gille.executeForm(*Steve);

	// form1->execute(Gille);
	// Robot->execute(Gille);
	// Steve->execute(Gille);



}