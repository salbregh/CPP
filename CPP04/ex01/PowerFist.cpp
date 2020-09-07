/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:21:18 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 15:08:48 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist::PowerFist(PowerFist const &src)
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

void			PowerFist::attack(void) const
{
	std::cout << "*pschhh... SBAM!*" << std::endl;
}
