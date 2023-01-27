/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:09 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/27 15:24:08 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// std::cout << ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY())) << std::endl;

	if (((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY())) == 0)
		return(false);
	Fixed λ1 = ((b.getY() - c.getY())*(point.getX() - c.getX()) + (c.getX() - b.getX())*(point.getY() - c.getY())) / ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY()));
	Fixed λ2 = ((c.getY() - a.getY())*(point.getX() - c.getX()) + (a.getX() - c.getX())*(point.getY() - c.getY())) / ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY()));
	Fixed λ3 = λ1 - λ2; 

	std::cout << λ1 << std::endl;
	std::cout << λ2 << std::endl;
	std::cout << λ3 << std::endl;

	if (λ1 == 0 || λ2 == 0 || λ3 == 0)
		return (false);
	if (λ1 == 1 || λ2 == 1 || λ3 == 1)
		return (false);

	return (true);
}