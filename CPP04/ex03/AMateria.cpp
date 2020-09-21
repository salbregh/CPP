/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 11:35:53 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:22:35 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->_xp = 0;
	this->_type = "AMateria"; // was dit
	return ;
}

AMateria::AMateria(std::string const &type)// : _type(type)
{
	this->_xp = 0;
	this->_type = type;
	return ;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria&			AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs._xp;
		this->_type = rhs._type;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const&	AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int		AMateria::getXP(void) const
{
	return (this->_xp);
}	

void				AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	if (this->_type == "ice")
		std::cout << "* shoots an ice bold at " << target.getName() << " *" << std::endl;
	if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
