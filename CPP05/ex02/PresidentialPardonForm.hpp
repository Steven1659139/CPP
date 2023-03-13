/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:49:08 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardonForm :  public Form 
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &name);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
		void execute(Bureaucrat const & executor) const;
};