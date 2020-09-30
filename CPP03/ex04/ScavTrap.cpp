/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:58:04 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 13:14:48 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SCAVTRAP made: " << this->_name << std::endl;
	this->_name = name;
	this->_classname = "ScavTrap";
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_level = 1;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = src;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
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

void		ScavTrap::challengeNewcomer(void)
{
	std::string challenge[5] = {"challenge1", "challenge2", "challenge3", "challenge4", "challenge5"};
	int			nb = rand() % 5;
	std::cout << "Challenge: " << challenge[nb] << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor SCAVTRAP called, deleted: " << this->_name << std::endl;
}
