/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 09:55:08 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/31 12:32:16 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name
	<< " just appeared!" << std::endl;
	this->_name = name;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for nu apparent reason"
	<< std::endl;
	return ;
}

Victim::Victim(Victim const &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Victim&	Victim::operator=(Victim const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
	}
	return (*this);
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

std::ostream& operator<<(std::ostream &out, const Victim &rhs)
{
	out << "I am " << rhs.getName() << ", and I like otters!" << std::endl;
	return (out);
}

// void	getPolymorphed() const 
// AME have been turned into a cute little sheep