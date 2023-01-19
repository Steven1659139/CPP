/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:04:29 by stevenlavoi       #+#    #+#             */
/*   Updated: 2023/01/19 18:55:26 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook Book;
    Contact    Contact;

    while(1)
    {
        std::cout << "\x1b[32mEntrée: \033[0m";
        std::getline(std::cin, command);
        if (std::cin.good())
        {
            if (command == "ADD")
                Book.add_data();
            else if (command == "SEARCH")
                Book.print_data();
            else if (command == "EXIT")
                exit(0);
        }
        else
            exit(0);
    }
}