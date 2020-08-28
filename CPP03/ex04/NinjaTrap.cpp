/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 12:03:19 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 18:18:11 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "Constructor NINJATRAP called, made: " << this->_name << std::endl;
	this->_classname = "NinjaTrap";
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangesAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_level = 1;
	std::cout << "START VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl << std::endl;
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
		_name = rhs._name;
		_armorDamageReduction = rhs._armorDamageReduction;
		_energyPoints = rhs._energyPoints;
		_hitPoints = rhs._hitPoints;
		_level = rhs._level;
		_maxEnergyPoints = rhs._maxEnergyPoints;
		_maxHitPoints = rhs._maxHitPoints;
		_meleeAttackDamage = rhs._meleeAttackDamage;
		_rangesAttackDamage = rhs._rangesAttackDamage;
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
	std::cout << "END VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl;
}
