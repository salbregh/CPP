/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:13:46 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 17:27:05 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name)
{
	this->_ap = 40;
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
	}
	return (*this);
}

void		Character::recoverAP(void)
{
	// als ap < 40 , add 10
	// kan niet meer dan 40 zijn
	// no AP no attack
}

void		Character::attack(Enemy *enemy)
{
	(void)enemy;
	/// display NAME attacks ENEMY_TYPE with a WEAPONNAME
	// followed by a call t the current ewaons attack() method
	// if no equipped weapon attack() does nothing
}

void		Character::equip(AWeapon *weapon)
{
	(void)weapon;
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

std::ostream& operator<<(std::ostream &out, const Character &rhs)
{
	// if weapon
	out << rhs.getName() << " has, " << rhs.getAP() << " and wields a " << std::endl; //<< getWeapon() << std::endl;
	// else
	// out << rhs.getName() << " has, " << rhs.getAP() << " and is unarmed." << std::endl;
	return (out);
}

		// Character(const char &src);
		// Character&	operator=(Character const &rhs);
		// void		recoverAP(void);
		// void		equid(AWeapon* weapon);
		// void		attack(Enemy* enemy);
		// std::string	getName(void) const;

