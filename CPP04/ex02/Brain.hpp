/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:47:46 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 20:02:14 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		void fill_brain();
		void print_brain();

	private:
		std::string _ideas[100];
};