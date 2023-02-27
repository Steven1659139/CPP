/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:31:51 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/24 17:07:03 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int raw);
	private:
		int value;
		static const int fractionalBits = 8;
};

#endif
