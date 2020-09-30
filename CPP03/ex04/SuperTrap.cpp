/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 18:02:35 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 13:49:54 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "Constructor SUPERTRAP called" << std::endl;
	this->_classname = "SuperTrap";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
	this->_level = 1;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src) : ClapTrap(src), FragTrap(src), NinjaTrap(src)  
{
	std::cout << "Copy constructor SuperTrap called" << std::endl;
	*this = src;
	return ;
}

SuperTrap&	SuperTrap::operator=(SuperTrap const &rhs)
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

SuperTrap::~SuperTrap(void)
{
	std::cout << "Destructor SUPERTRAP called" << std::endl;
}
