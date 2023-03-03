/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:17 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 09:38:31 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) 
{
	// std::cout << "Default Point constructor call" << std::endl;

}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Set Point constructor call" << std::endl;

}

Point::Point(const Point &src) : _x(src._x), _y(src._y)
{
	// std::cout << "Copy Point constructor call" << std::endl;
}

Point& Point::operator=(const Point &rhs) 
{
	// std::cout << "Assignation Point call" << std::endl;

	(Fixed)this->_x = rhs._x;
	(Fixed)this->_y = rhs._y;
	return *this;
}

Point::~Point() 
{
	// std::cout << "Default Point destructor call" << std::endl;
	
}

float Point::getX() const
{
	return(this->_x.toFloat());
}
float Point::getY() const
{
	return(this->_y.toFloat());
}

std::ostream &    operator<<(std::ostream & input, Point const & i){
    input << "(x:" << i.getX() << " y: "<< i.getY() << ")";
    return input;
}