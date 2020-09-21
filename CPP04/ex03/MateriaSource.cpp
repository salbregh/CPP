/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 16:01:09 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:10:03 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)// : IMateriaSource()
{
	this->_materia = new AMateria*[4];
	memset(this->_materia, 0, 5);
	this->_count = 0;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_count; i++)
	{
		delete this->_materia[i];
	}
	delete [] this->_materia;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	this->_count = src._count;
	for (int i = 0; i < this->_count; i++)
		this->_materia[i] = src._materia[i]->clone();
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		this->_count = rhs._count;
		for (int i = 0; i <= this->_count; i++)
		{
			delete this->_materia;
		}
		this->_materia = new AMateria*[4];
		for (int i = 0; i < this->_count; i++)
			this->_materia[i] = rhs._materia[i]->clone();
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_count >= 4 || materia == NULL)
		return ;
	this->_materia[this->_count] = materia;
	this->_count++;
	return ;
}

AMateria*		MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}
