/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:44:14 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/13 11:44:05 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        virtual ~Cure();

        Cure(Cure const &src);
        Cure& operator=(Cure const &src);

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter &target);
};

#endif