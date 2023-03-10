/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:37:39 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor call" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
	this->_name = name;
	this->_grade = grade;
	std::cout << "Bureaucrat constructor call" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	std::cout << "Bureaucrat copy constructor call" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor call" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	this->_name = src._name;
	std::cout << "Bureaucrat copy assignement call" << std::endl;
	return(*this);
}
std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw(Bureaucrat::GradeTooLowException());

}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw(Bureaucrat::GradeTooHighException());
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade too high [1-150]");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too low [1-150]");
}

std::ostream &operator<<(std::ostream &input, Bureaucrat const &src)
{
    input << src.getName() << ", bureaucrat grade " << src.getGrade();
    return input;
}

void Bureaucrat::signForm(Form &form)
{
	if (this->getGrade() < form.getGradeSign())
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because grade too low" << std::endl;



}