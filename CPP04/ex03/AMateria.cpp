/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:48:16 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 18:44:35 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
    // std::cout << "AMateria default constructor call" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    // std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria " << this->_type << " destroyed" << std::endl;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}