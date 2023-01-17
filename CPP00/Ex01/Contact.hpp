/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:33:58 by stevenlavoi       #+#    #+#             */
/*   Updated: 2023/01/13 18:34:58 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

#define TRUNC(str) (str.length() > 10 ? std::cout << str.substr(0, 9) << "." : std::cout << std::setw(10) << str)

class Contact
{
    private:
            std::string first_name;
            std::string last_name;
            std::string nickname;
            std::string phone_number;
            std::string darkest_secret;
    public:
            void    add_contact(Contact *contact);
            void    print_contact(Contact contact);
            void    print_all_contact(Contact contact);
};

#endif