/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:51:29 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/09 19:15:55 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default constructor call" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}
// {
// 	std::cout << "ShrubberyCreationForm constructor call" << std::endl;
// }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
	std::cout << "ShrubberyCreationForm copy constructor call" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default destructor call" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	std::cout << "ShrubberyCreationForm copy assignement call" << std::endl;
	return(*this);
}