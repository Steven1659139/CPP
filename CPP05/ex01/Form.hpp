/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:46:39 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/09 16:24:24 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"
#include "Bureaucrat.hpp"

// Pensez a remettre const

class Bureaucrat;

class Form
{
	private:
		std::string _name;
		bool _signature;
		int _grade_signature;
		int _grade_exec;

	public:
		Form();
		Form(const std::string &name, int gradeSign, int gradeExec);
		Form(const Form &rhs);
		~Form();
		Form &operator=(const Form &rhs);
		std::string getName() const;
		bool getSignature() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(Bureaucrat staff);

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

};

std::ostream &operator<<(std::ostream &input, Form const &rhs);

#endif