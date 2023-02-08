/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:46:39 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/08 11:50:13 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Form
{
	private:
		const std::string name;
		bool signature;
		int grade_signature;
		int grade_exec;

	public:
		getName();
		getSignature();
		getGradeSign();
		getGradeExec();
}