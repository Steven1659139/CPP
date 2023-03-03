/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 08:13:23 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 08:11:56 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &rhs);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int raw);

		float toFloat(void) const;
		int	toInt(void) const;
	private:
		int value;
		static const int fractionalBits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& Fix);

#endif