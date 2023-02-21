/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:19:56 by stevenlavoi       #+#    #+#             */
/*   Updated: 2023/02/21 13:51:15 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdlib.h> 
# include <string> 

class PhoneBook
{
    public:
            PhoneBook()
            {
                nb_contact = 0;
            }
            void    add_data();
            void    print_data();
    private:
        int        nb_contact;
        Contact    contacts[8];
};
#endif