/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:40:20 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/01 17:32:26 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	private:
		static void (Harl::*functions[4])(void);
        static std::string levels[4];

		void debug();
		void info();
		void warning();
		void error();
		void defaultFunction();

public:
    void complain(std::string level);
};
#endif