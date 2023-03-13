/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:31:29 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	// std::cout << "Form default constructor call" << std::endl;
}

Form::Form(const std::string &name, const int &gradeSign, const int &gradeExec)
{
	this->_name = name;
	this->_grade_signature = gradeSign;
	this->_grade_exec = gradeExec;
	// std::cout << "Form constructor call" << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooLowException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &src)
{
	*this = src;
	// std::cout << "Form copy constructor call" << std::endl;
}

Form::~Form()
{
	// std::cout << "Form default destructor call" << std::endl;
}

Form &Form::operator=(const Form &src)
{
	this->_grade_signature = src._grade_signature;
	this->_grade_exec = src._grade_exec;
	this->_name = src._name;
	// std::cout << "Form copy assignement call" << std::endl;
	return(*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGradeSign() const
{
	return (this->_grade_signature);
}

int Form::getGradeExec() const
{
	return (this->_grade_exec);
}

bool Form::getSignature() const
{
	return(this->_signature);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("Grade too high [1-150]");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low [1-150]");
}

const char *Form::SignatureException::what() const throw()
{
	return("The form is not signed");
}

std::ostream &operator<<(std::ostream &input, Form const &src)
{
	input << "Form " << src.getName() << " Signature grade: " << src.getGradeSign() << " Execution grade: " << src.getGradeExec() << " Signature: " << src.getSignature();
	return(input);
}

void Form::beSigned(Bureaucrat staff)
{
	if (staff.getGrade() > this->getGradeSign())
		throw (Form::GradeTooLowException());
	else
		this->_signature = true;
}

bool Form::check_requirement(Bureaucrat const &staff) const
{
	if (this->getSignature() == true)
	{
		if (this->getGradeExec() > staff.getGrade())
			return (true);
		else
			throw(GradeTooLowException());
	}
	else
		throw(SignatureException());
}