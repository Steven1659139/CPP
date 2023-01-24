/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:45:18 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/23 23:23:28 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void (Harl::*Harl::functions[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
std::string Harl::levels[4] = { "debug", "info", "warning", "error"};

void Harl::debug() {
	std::cout << "debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void Harl::info() {
	std::cout << "info: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning() {
	std::cout << "warning: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "error: This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::defaultFunction() {
	std::cout << "Invalid level" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[4] = { "debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++) {
        if(levels[i] == level) {
            switch (i) {
                case 0:
                    debug();
                case 1:
                    info();
                case 2:
                    warning();
                case 3:
                    error();
                    break;
            }
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
}
