/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 14:44:17 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:31:19 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string.h>

Character::Character(void)// : ICharacter()
{
	this->_count = 0;
	this->_name = "name";
	return ;
}

Character::Character(const std::string& name) : _name(name)
{
	this->_count = 0;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < this->_count; i++)
	{
		delete this->_materia;
	}
	delete [] this->_materia;
}

Character::Character(Character const &src)
{
	// *this = src;
	this->_count = src._count;
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone();
	return ;
}

Character&			Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_materia = rhs._materia;
		for (int i = 0; i <= this->_count; i++)
			delete this->_materia[i];
		this->_materia = new AMateria*[4];
		for (int i = 0; i < this->_count; i++)
			this->_materia[i] = rhs._materia[i]->clone();
	}
	return (*this) ;
}


std::string const&	Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
// 	if (this->_count >= 4)
// 		return ;
// 	this->_materia[this->_count] = m->clone();
// 	this->_count++;
// 	return ;
for (int i = 0; i < 4; i++)
{
	if (this->_materia[i] == NULL)
	{
		this->_materia[i] = m->clone();
		this->_count++;
		break;
	}
}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_count)
		this->_materia[idx] = NULL;
		// (void)idx;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx > this->_count)
		return ;
	this->_materia[idx]->use(target);
	return ;
}

