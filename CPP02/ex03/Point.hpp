/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:19 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/01 17:47:22 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point();
		~Point();
		Point(Point &src);
		Point(const float x, const float y);
		float getX() const;
		float getY() const;
		Point &operator=(const Point &rhs);


};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &    operator<<(std::ostream & input, Point const & i);
#endif