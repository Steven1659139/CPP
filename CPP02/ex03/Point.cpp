/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:17 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/06 15:10:28 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &src) : _x(src._x), _y(src._y) {}

Point& Point::operator=(const Point &rhs) 
{
	(Fixed)this->_x = rhs._x;
	(Fixed)this->_y = rhs._y;
	return *this;
}

Point::~Point() {}

float Point::getX() const
{
	return(this->_x.toFloat());
}

float Point::getY() const
{
	return(this->_y.toFloat());
}

std::ostream &operator<<(std::ostream & input, Point const & i)
{
    input << "(x:" << i.getX() << " y: "<< i.getY() << ")";
    return input;
}