/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:25:25 by stevenlavoi       #+#    #+#             */
/*   Updated: 2023/01/13 19:26:19 by stevenlavoi      ###   ########.fr       */
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
        if (line[0] == '\0')
        {
            exit(1);
        }
        std::cout << "L'entrée est vide !";
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