/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 12:03:19 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 13:22:10 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor NINJATRAP called, made : " << this->_name << std::endl;
	this->_classname = "NinjaTrap";
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_level = 1;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	std::cout << "Copy constructor NinjaTrap called" << std::endl;
	*this = src;
	return ;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_armorDamageReduction = rhs._armorDamageReduction;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
		this->_level = rhs._level;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
	}
	return (*this);
}

void	NinjaTrap::ninjaShoebox(FragTrap &attack)
{
	std::cout << "Attack " << attack.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &attack)
{
	std::cout << "Attack " << attack.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &attack)
{
	std::cout << "Attack " << attack.getName() << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destructor called, deleted: " << this->_name << std::endl;
}
