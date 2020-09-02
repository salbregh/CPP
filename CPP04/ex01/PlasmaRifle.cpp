/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:20:45 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 14:01:11 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon(_name)
{
	this->_name = "Plasma Rifle";
	this->_damage = 21;
	this->_apcost = 5;
	// std::cout ?
}

PlasmaRifle::~PlasmaRifle(void)
{
	// std::cout ?
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src)
{
	*this = src;
	return ;
}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

void			PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
