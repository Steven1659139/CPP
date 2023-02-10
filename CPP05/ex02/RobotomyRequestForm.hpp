/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:46:15 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/09 19:12:54 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &name, int gradeSign, int gradeExec);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);




};