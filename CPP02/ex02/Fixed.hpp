/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:01:43 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 08:20:06 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int value;
		static const int fractionalBits = 8;

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

		static Fixed &min(Fixed &F1, Fixed &F2);
		static const Fixed &min(const Fixed &F1, const Fixed &F2);
		static Fixed &max(Fixed &F1, Fixed &F2);
		static const Fixed &max(Fixed const &F1, Fixed const &F2);

		bool operator> (const Fixed& Fix) const;
		bool operator< (const Fixed& Fix) const;
		bool operator>= (const Fixed& Fix) const;
		bool operator<= (const Fixed& Fix) const;
		bool operator== (const Fixed& Fix) const;
		bool operator!= (const Fixed& Fix) const;

		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

};

std::ostream& operator<<(std::ostream& os, const Fixed& Fix);

#endif