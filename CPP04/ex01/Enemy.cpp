/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:14:20 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 15:10:52 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const& type): _hp(hp), _type(type)
{
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
	return ;
}

Enemy&	Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_hp = rhs._hp;
	}
	return (*this) ;
}

std::string	Enemy::getType(void) const
{
	return (this->_type) ;
}

int			Enemy::getHP(void) const
{
	return (this->_hp);
}

void		Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return ;
	else
	{
		if ((this->_hp - damage) < 0)
			this->_hp = 0;
		else
			this->_hp = this->_hp - damage;
	}
}
