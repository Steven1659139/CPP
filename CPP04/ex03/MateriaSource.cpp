/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:57:53 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 18:56:50 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materias[i] != NULL)
            {
				delete this->materias[i];
                this->materias[i] = NULL;
            }
			if (obj.materias[i] != NULL)
				this->materias[i] = obj.materias[i]->clone();
			else
				this->materias[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::printMateria()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
            std::cout << this->materias[i]->getType() << " ";    // type
            // std::cout << this->materias[i] << " ";               // ptr
        else
            std::cout << NULL << " ";
    }
    std::cout << std::endl;
}

AMateria* MateriaSource::getMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] && materias[i]->getType() == type)
            return materias[i];
    return NULL;
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] == NULL)
        {
            materias[i] = m;
            // std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
    // std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    for ( int i = 0; i < 4; i++ )
        if ( materias[i] && materias[i]->getType() == type )
            return materias[i]->clone();
    return NULL;
}