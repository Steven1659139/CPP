/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:40:20 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm default constructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), _target(target) {}
// {
// 	std::cout << "RobotomyRequestForm constructor call" << std::endl;
// }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
	// std::cout << "RobotomyRequestForm copy constructor call" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm default destructor call" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	(void)src;
	// std::cout << "RobotomyRequestForm copy assignement call" << std::endl;
	return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{	
	if (this->check_requirement(executor))
	{
			std::srand(std::time(NULL));
			std::cout << "BRRAAAAAP BRRRAAAAAAAP BRRAAAAAAP" << std::endl;
			if (std::rand() % 2 == 0)
				std::cout << this->_target << " has been robotomized succesfully" << std::endl;
			else 
				std::cout << "Failed to robotomized " << this->_target << std::endl;
	}
}