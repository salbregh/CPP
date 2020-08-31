/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:58:04 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/31 14:13:33 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _name(name)
{
	std::cout << "ScavTrap made: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_rangesAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_level = 1;
	std::cout << "START VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl << std::endl;
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

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCAV " << this->_name << " attacks " << target << " at range, causing "
	<< _rangesAttackDamage << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAV " << this->_name << " attacks " << target << " with melee attack, causing "
	<< _meleeAttackDamage << " points of damage!" << std::endl;
}

int			ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes damage" << std::endl;
	if (_hitPoints == 0)
	{
		std::cout << this->_name << "'s HP already at 0" << std::endl;
		return (0);
	}
	else
	{
		if (_hitPoints > (amount - _armorDamageReduction))
			_hitPoints = (_hitPoints - (amount - _armorDamageReduction));
		else
			_hitPoints = 0;
	}
	std::cout << this->_name << "'s HP is now: " << this->_hitPoints << std::endl;
	return (0);
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
		std::cout << this->_name << " couldn't be repaired HP already at the maximum" << std::endl;
	else if (_hitPoints + amount >= _maxHitPoints)
	{
		_hitPoints = _maxHitPoints;
		std::cout << this->_name << "'s HP scav repaired to: " << _hitPoints << std::endl;
	}
	else
	{
		_hitPoints = _hitPoints + amount;
		std::cout << this->_name << "'s HP scav repaired to: " << _hitPoints << std::endl;
	}
}

void		ScavTrap::challengeNewcomer(void)
{
	std::string challenge[5] = {"challenge1", "challenge2", "challenge3", "challenge4", "challenge5"};
	int			nb = rand() % 5;
	std::cout << "Challenge: " << challenge[nb] << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called, deleted: " << this->_name << std::endl;
	std::cout << "END VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl;
}
