/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:46:57 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:34:26 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor call" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor call" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Copy Brain constructor call" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain assignement operator call" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
    return *this;
}

void Brain::fill_brain()
{
	char c = 41;

	for(int i = 0; i < 100; i++)
		this->_ideas[i] = c++;
}

void Brain::print_brain()
{
	for(int i = 0; i < 100; i++)
		std::cout << this->_ideas[i];
	std::cout << std::endl;
}