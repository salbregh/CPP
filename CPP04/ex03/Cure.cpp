/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 13:13:35 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:00:40 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure")
{
	this->_xp = 0;
	return ;
}

Cure::Cure(Cure const &src)
{
	*this = src;
	return ;
}

Cure&	Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_xp = rhs._xp;
	}
	return (*this);
}

Cure*	Cure::clone(void) const
{
	// Cure* newMateria = new Cure();
	// *newMateria = *this;
	// return (newMateria);
	return new Cure(*this);
}

void		Cure::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	return ;
}
