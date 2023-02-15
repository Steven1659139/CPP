/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:46:39 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/15 12:40:55 by slavoie          ###   ########.fr       */
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
		std::string _target;
		bool _signature;
		int _grade_signature;
		int _grade_exec;

	public:
		Form();
		Form(const std::string &name, const int &gradeSign, const int &gradeExec);
		Form(const Form &rhs);
		virtual ~Form();
		Form &operator=(const Form &rhs);
		std::string getName() const;
		bool getSignature() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(Bureaucrat staff);
		virtual void execute(Bureaucrat const & executor) const = 0;
		bool check_requirement(Bureaucrat const &staff) const;

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
		class SignatureException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream &operator<<(std::ostream &input, Form const &rhs);

#endif