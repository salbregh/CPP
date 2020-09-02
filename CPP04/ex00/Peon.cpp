/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 11:23:09 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 22:18:05 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(std::string name) //: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	this->_name = name;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon::Peon(Peon const &src) //: Victim(src)
{
	*this = src;
	return ;
}

Peon&	Peon::operator=(Peon const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
	}
	return (*this);
}
