/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:12:07 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 14:54:33 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
	return ;
}

AWeapon&	AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

std::string		AWeapon::getName(void) const
{
	return (this->_name);
}

int				AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int				AWeapon::getDamage(void) const
{
	return (this->_damage);
}
