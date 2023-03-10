/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:26:40 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <iomanip>

class Converter
{
	public:
		int is_char(std::string input);
		int is_int(std::string input);
		int is_float(std::string input);
		int is_double(std::string input);
		void convert(std::string input);
		void display_convertion();
		Converter();
		Converter(const Converter &src);
		~Converter();
		Converter &operator=(const Converter &src);

	private:
		std::string initial_type;
		char c;
		int i;
		float f;
		double d;

};