/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:58:24 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/31 14:12:32 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): _name(name)
{
	std::cout << "Constructor FRAGTRAP called, made: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_rangesAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_level = 1;
	std::cout << "START VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
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

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FRAGTRAP " << this->_name << " attacks " << target << " at range, causing "
	<< _rangesAttackDamage << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FRAGTRAP " << this->_name << " attacks " << target << " with melee attack, causing "
	<< _meleeAttackDamage << " points of damage!" << std::endl;
}

int			FragTrap::takeDamage(unsigned int amount)
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

void		FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
		std::cout << "Couldn't be repaired, " <<this->_name << "'s HP already at the maximum" << std::endl;
	else if (_hitPoints + amount >= _maxHitPoints)
	{
		_hitPoints = _maxHitPoints;
		std::cout << this->_name << "'s HP repaired to: " << _hitPoints << std::endl;
	}
	else
	{
		_hitPoints = _hitPoints + amount;
		std::cout << this->_name << "'s HP repaired to: " << _hitPoints << std::endl;
	}
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = {"attack1", "attack2", "attack3", "attack4", "attack5"};
	int			nb = rand() % 5;
	if (_energyPoints < 25)
	{
		std::cout << "Not enough energy points for attack" << std::endl;
		std::cout << this->_name << "'s EP is: " << _energyPoints << std::endl;
	}
	else
	{
		_energyPoints -= 25;
		std::cout << "Random attack: " << attacks[nb] << " done on " << target << std::endl;
		std::cout << this->_name <<"'s EP is: " << _energyPoints << std::endl;
	}
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FRAGTRAP called, deleted: " << this->_name << std::endl;
	std::cout << "END VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl;
}
