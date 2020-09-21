/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 12:57:56 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:04:42 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	this->_xp = 0;
	return ;
}

Ice::Ice(Ice const &src)
{
	*this = src;
	return ;
}

Ice&	Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_xp = rhs._xp;
	}
	return (*this);
}

Ice*		Ice::clone(void) const
{
	return new Ice(*this);
}

void		Ice::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	return ;
}
