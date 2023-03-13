/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:14:01 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm default constructor call" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5), _target(target) {}
// {
// 	std::cout << "PresidentialPardonForm constructor call" << std::endl;
// }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
	// std::cout << "PresidentialPardonForm copy constructor call" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm default destructor call" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	(void)src;
	// std::cout << "PresidentialPardonForm copy assignement call" << std::endl;
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{	
	if(this->check_requirement(executor))
		std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}