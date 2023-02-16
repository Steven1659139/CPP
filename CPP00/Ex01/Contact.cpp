/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:25:25 by stevenlavoi       #+#    #+#             */
/*   Updated: 2023/02/16 14:23:05 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string get_data(const char *prompt)
{
    std::string line;

    while(1)
    {
        std::cout << "\x1b[32mADD\033[0m" << prompt;
        std::getline (std::cin, line);
        if (line.length())
            return (line);
        if (!(std::cin.good()))
        {
            exit(1);
        }
        std::cout << "L'entrée est vide !\n";
    }
}

void    Contact::add_contact(Contact *contact)
{
    (*contact).first_name = get_data("[First name]  > ");
    (*contact).last_name = get_data("[Last name]  > ");
    (*contact).nickname = get_data("[Nickname]  > ");
    (*contact).phone_number = get_data("[Phone number]  > ");
    (*contact).darkest_secret = get_data("[Darkest secret]  > ");
}

void    Contact::print_all_contact(Contact contact)
{
        TRUNC(contact.first_name);
        std::cout << "|";
        TRUNC(contact.last_name);
        std::cout << "|";
        TRUNC(contact.nickname);
        std::cout << "|";
        // TRUNC(contact.phone_number);
        // std::cout << "|";
        // TRUNC(contact.darkest_secret);
        std::cout << std::endl;



}

void    Contact::print_contact(Contact contact)
{
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone number: " << contact.phone_number << std::endl;
    std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}