/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:19 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 09:34:32 by stevenlavoi      ###   ########.fr       */
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
		Point(const Point &src);
		Point(const float x, const float y);
		float getX() const;
		float getY() const;
		Point &operator=(const Point &rhs);


};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &    operator<<(std::ostream & input, Point const & i);
#endif