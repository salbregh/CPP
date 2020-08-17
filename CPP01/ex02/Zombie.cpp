/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 18:33:03 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:41:29 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been eaten" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Yaaaaassss queen" << std::endl;
	return ;
}

void	Zombie::setZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	return ;
}
