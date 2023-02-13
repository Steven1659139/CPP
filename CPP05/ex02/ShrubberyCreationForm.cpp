/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:51:29 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/13 14:44:56 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm default constructor call" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}
// {
// 	std::cout << "ShrubberyCreationForm constructor call" << std::endl;
// }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
	// std::cout << "ShrubberyCreationForm copy constructor call" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm default destructor call" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	// std::cout << "ShrubberyCreationForm copy assignement call" << std::endl;
	return(*this);
}

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->check_requirement(executor))
	{
			std::ofstream file;

			file.open((this->_target + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc); 

			file << std::endl;
			file << "               ,@@@@@@@,                  " << std::endl;
			file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
			file << "    ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o     " << std::endl;
			file << "   ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88'    " << std::endl;
			file << "   %&&%&%&/%&&%@@|@@/ /@@@88888|88888'    " << std::endl;
			file << "   %&&%/ %&&%&&@@| V /@@' `88|8 `/88'     " << std::endl;
			file << "   `&%| ` /%&'    |.|        | '|8'       " << std::endl;
			file << "       |o|        | |         | |         " << std::endl;
			file << "       |.|        | |         | |         " << std::endl;
			file << "    ||/ ._|//_/__/  ,|_//__||/.  |_//__/_ " << std::endl;
	}
}