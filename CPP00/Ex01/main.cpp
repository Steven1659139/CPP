/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:04:29 by stevenlavoi       #+#    #+#             */
/*   Updated: 2023/01/13 19:48:33 by stevenlavoi      ###   ########.fr       */
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
        std::cout << "Entrée: ";
        std::getline(std::cin, command);

        if (command == "ADD")
            Book.add_data();
        else if (command == "SEARCH")
            Book.print_data();
        else if (command == "EXIT")
            exit(0);
        
    }




}