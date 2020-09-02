/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:14:20 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 16:44:53 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const& type): _hp(hp), _type(type)
{
	// std::cout?
	return ;
}

Enemy::~Enemy(void)
{
	// std::cout
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

void		Enemy::takeDamage(int)
{
	// dunno
}
