/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:57:33 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 20:02:47 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*       _materias[4];

    public:
        MateriaSource();
        ~MateriaSource();

        MateriaSource(MateriaSource const &src);
        MateriaSource&  operator=(MateriaSource const &src);

        AMateria*       getMateria(std::string const &type);
        AMateria*       createMateria(std::string const &type);
        void            learnMateria(AMateria*);
        void            printMateria();
};


#endif