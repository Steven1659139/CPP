/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:05:03 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/15 15:23:53 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() 
{
    this->Type_form[0] = "robotomy request";
    this->Type_form[1] = "presidential pardon";
    this->Type_form[2] = "shrubbery creation";
}

Intern::Intern(const Intern& rhs) 
{
    *this = rhs;
}

Intern::~Intern() 
{}

Intern& Intern::operator=(const Intern& rhs) 
{
    (void) rhs;
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

    static std::map<std::string, std::function<Form*(std::string)> >formCreators;
    formCreators.insert(std::make_pair("robotomy request", Intern::createRobotomyRequestForm));
    formCreators.insert(std::make_pair("presidential pardon", &Intern::createPresidentialPardonForm));
    formCreators.insert(std::make_pair("shrubbery creation", &Intern::createShrubberyCreationForm));

    std::map<std::string, std::function<Form*(std::string)> >::iterator iterator = formCreators.find(name);
    if (iterator != formCreators.end())
    {
        std::cout << "Intern creates " << name << std::endl;
        return iterator->second(target);
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return nullptr;
}
