/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:05:03 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() 
{
    this->Type_form[0] = "robotomy request";
    this->Type_form[1] = "presidential pardon";
    this->Type_form[2] = "shrubbery creation";
}

Intern::Intern(const Intern& src) 
{
    *this = src;
}

Intern::~Intern() 
{}

Intern& Intern::operator=(const Intern& src) 
{
    (void) src;
    return (*this);
}

Form* Intern::createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form* Intern::createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form* Intern::createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeForm(std::string name, std::string target) 
{
    Form *(*formCreator[3])(std::string) = {
        Intern::createRobotomyRequestForm, 
        Intern::createPresidentialPardonForm, 
        Intern::createShrubberyCreationForm
        };

    for(int i = 0; i < 3; i++)
    {
        if (name == this->Type_form[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return(formCreator[i](target));
        }
    }

    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return nullptr;
}
