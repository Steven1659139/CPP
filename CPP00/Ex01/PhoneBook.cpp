/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:20:03 by stevenlavoi       #+#    #+#             */
/*   Updated: 2023/01/13 19:41:50 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    PhoneBook::add_data()
{
    int index;
    Contact    Contact;

    index = this->nb_contact % 8;
    Contact.add_contact(&(this->contacts[index]));
    this->nb_contact++;
}

void    PhoneBook::print_data()
{
    int index;
    Contact Contact;
    std::string line;

    index = 0;

    if (this->nb_contact > 0)
    {
        std::cout << " ___________________________________________" << std::endl;
        std::cout << "|     Index|    F_name|    L_name|  Nickname|" << std::endl;
        while(index < this->nb_contact && index < 8)
        {
            std::cout << "|";
            TRUNC(std::to_string(index + 1));
            std::cout << "|";
            Contact.print_all_contact(this->contacts[index]);
            index++;
        }
        std::cout << "--------------------------------------------" << std::endl;

        index = 0;
        while (1)
        {
            std::cout << "Entrer l'index du contact: " ;
            std::getline(std::cin, line);
            index = atoi(line.c_str());
            index -= 1;

            if (index >= 0 && index < this->nb_contact && index < 8)
            {
                Contact.print_contact(this->contacts[index]);
                break; 
            }
            std::cout << "l'index n'est pas valide." << std::endl;
        }
    }
    else
        std::cout << "Le répertoire est vide." << std::endl;









}