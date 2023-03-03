/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:31:51 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/03 08:08:04 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &rhs);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int value;
		static const int fractionalBits = 8;
};

#endif
