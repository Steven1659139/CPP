/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:43:48 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 17:22:20 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("debug");
    std::cout << std::endl;
    harl.complain("info");
    std::cout << std::endl;
    harl.complain("warning");
    std::cout << std::endl;
    harl.complain("error");
    std::cout << std::endl;
    harl.complain("not_valid");
    return 0;
}
