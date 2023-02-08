/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:32:44 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/08 15:52:35 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

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
		Bureaucrat(const Bureaucrat &rhs);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &rhs);
		
		void incrementGrade();
		void decrementGrade();
		std::string getName();
		int getGrade();
		void print()
		std::ostream &operator<<(std::ostream &input, Bureaucrat const &rhs);

};
