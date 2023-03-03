/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:09 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 14:26:43 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// std::cout << "in the function" << std::endl;


	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << c << std::endl;
	// std::cout << point << std::endl;

    float areaABC = 0.5f * (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
	// std::cout << areaABC << std::endl;

    float lambda1 = 0.5f * ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / areaABC;
    float lambda2 = 0.5f * ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / areaABC;
    float lambda3 = 1.0f - lambda1 - lambda2;

	std::cout << lambda1 << std::endl;
	std::cout << lambda2 << std::endl;
	std::cout << lambda3 << std::endl;

    return (lambda1 > 0 && lambda2 > 0 && lambda3 > 0);
}

