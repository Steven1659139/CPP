/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:57:53 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/12 19:50:06 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materias[i])
            delete _materias[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i] != NULL)
            {
				delete this->_materias[i];
                this->_materias[i] = NULL;
            }
			if (src._materias[i] != NULL)
				this->_materias[i] = src._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::printMateria()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            std::cout << this->_materias[i]->getType() << " ";    // type
            // std::cout << this->_materias[i] << " ";               // ptr
        else
            std::cout << NULL << " ";
    }
    std::cout << std::endl;
}

AMateria* MateriaSource::getMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i];
    return NULL;
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] == NULL)
        {
            _materias[i] = m;
            // std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
    // std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    return NULL;
}