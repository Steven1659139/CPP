/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:45:53 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <map>
#include <functional>

class Intern 
{
	public:
		Intern();
		Intern(const Intern& src);
		virtual ~Intern();

		
		Intern& operator=(const Intern& src);
		static Form* createRobotomyRequestForm(std::string target);
		static Form* createPresidentialPardonForm(std::string target);
		static Form* createShrubberyCreationForm(std::string target);

		Form* makeForm(std::string name, std::string target);

	private:
		std::string Type_form[3];
};
