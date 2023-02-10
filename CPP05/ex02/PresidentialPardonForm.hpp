/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:49:08 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/09 19:12:50 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardonForm :  public Form 
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &name, int gradeSign, int gradeExec);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
};