/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:51:41 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/13 11:44:38 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();

        Ice(Ice const &src);
        Ice& operator=(Ice const &src);

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif