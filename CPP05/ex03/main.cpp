/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:06:13 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/15 15:25:02 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

	// std::cout << Guy << std::endl;

	// Form RT4("RT4", 4, 8);


	// RT4.beSigned(Guy);
	// Gille.signForm(RT4);
	// std::cout << RT4 << std::endl;
	// Guy.signForm(RT4);
	// std::cout << RT4 << std::endl;
	// try
	// {

	// 	std::string str = "garden";

	// 	ShrubberyCreationForm *form1 = new ShrubberyCreationForm(str);
	// 	RobotomyRequestForm *Robot = new RobotomyRequestForm("Robot");
	// 	PresidentialPardonForm *Steve = new PresidentialPardonForm("Steve");
	// 	std::cout << *form1 << std::endl;
	// 	std::cout << *Robot << std::endl;
	// 	std::cout << *Steve << std::endl;

	// 	Gille.signForm(*form1);
	// 	Gille.signForm(*Robot);
	// 	Gille.signForm(*Steve);

	// Gille.executeForm(*form1);
	// 	Gille.executeForm(*Steve);
	// 	Gille.executeForm(*Robot);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	Bureaucrat Gille("Gille", 1);
	Intern Stage;

	Form *Robotomy = Stage.makeForm("presidential pardon", "Robot");

	if (Robotomy)
	{
		Gille.signForm(*Robotomy);
		Gille.executeForm(*Robotomy);
		delete Robotomy;
	}



	// form1->execute(Gille);
	// Robot->execute(Gille);
	// Steve->execute(Gille);



}