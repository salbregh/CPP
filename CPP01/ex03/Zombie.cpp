/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 15:14:12 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/18 15:22:01 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " has been eaten" << std::endl;
    return ;
}

void	Zombie::setZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Yaaaaassss queen" << std::endl;
	return ;
}
