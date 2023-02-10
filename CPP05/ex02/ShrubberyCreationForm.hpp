/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:43:32 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/09 19:12:58 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
};