/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:13:46 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 15:07:16 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name)
{
	this->_ap = 40;
	this->_weapon = NULL;
	return ;
}

Character::Character(void)
{
	return ;
}

Character::~Character(void)
{
	return ;
}

Character::Character(const char &src)
{
	*this = src;
	return ;
}

Character&	Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_ap = rhs._ap;
		this->_name = rhs._name;
		this->_weapon = rhs._weapon;
	}
	return (*this);
}

void		Character::recoverAP(void)
{
	this->_ap = this->_ap + 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void		Character::attack(Enemy *enemy)
{
	if (this->_weapon == NULL || enemy == NULL)
		return ;
	if (this->_ap < _weapon->getAPCost())
	{
		// std::cout << _weapon->getAPCost();
		std::cout << this->_name << " doenst have enough ap to attack." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << enemy->getType() << " with a "
	<< this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	this->_ap = this->_ap - this->_weapon->getAPCost();
	if (this->_ap < 0)
		this->_ap = 0;
	if (enemy->getHP() <= 0)
	{
		delete enemy;
		enemy = NULL;
	}
}

void		Character::equip(AWeapon *wp)
{
	this->_weapon = wp;
	// store a pointer to the weapon
}

int			Character::getAP(void) const
{
	return (this->_ap);
}

std::string	Character::getName(void) const
{
	return (this->_name);
}

AWeapon*	Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream& operator<<(std::ostream &out, const Character &rhs)
{
	if (rhs.getWeapon() == NULL)
		out << rhs.getName() << " has, " << rhs.getAP() << " and is unarmed." << std::endl;
	else
		out << rhs.getName() << " has, " << rhs.getAP() << " and wields a " << rhs.getWeapon()->getName() << std::endl;
	return (out);
}
