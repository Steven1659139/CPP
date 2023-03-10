/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:47:46 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/10 16:43:13 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);

	private:
		void fill_brain();
		std::string _ideas[100];
};