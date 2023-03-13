/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:32:44 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

// #include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &src);
		
		void incrementGrade();
		void decrementGrade();
		std::string getName() const;
		int getGrade() const;
		void signForm(Form &form);
		// void print();

};

std::ostream &operator<<(std::ostream &input, Bureaucrat const &src);

#endif