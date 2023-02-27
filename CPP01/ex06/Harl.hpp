/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:40:20 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/24 17:06:28 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP


#include <iostream>
#include <string>

class Harl
{
	public:
		void complain(std::string level);
	private:
		static void (Harl::*functions[4])(void);
        static std::string levels[4];
		void debug();
		void info();
		void warning();
		void error();
		void defaultFunction();
};

#endif