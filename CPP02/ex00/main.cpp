/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:13:50 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 17:52:53 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;

	std::cout << a.getRawBits() << std::endl; 
	std::cout << b.getRawBits() << std::endl; 
	std::cout << c.getRawBits() << std::endl;

	// a.setRawBits(18);
	// c = a;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	return 0; 
}