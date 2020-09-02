/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:21:18 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 14:00:28 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon(_name)
{
	this->_name = "Power Fist";
	this->_damage = 50;
	this->_apcost = 8;
	// std::cout ?
}

PowerFist::~PowerFist(void)
{
	// std::cout ?
	return ;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src)
{
	*this = src;
	return ;
}

PowerFist&	PowerFist::operator=(PowerFist const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

// check
void			PowerFist::attack(void) const
{
	std::cout << "*pschhh... SBAM!*" << std::endl;
}