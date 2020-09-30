/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:58:24 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 13:14:41 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor FRAGTRAP called, made: " << this->_name << std::endl;
	this->_classname = "FragTrap";
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_level = 1;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = src;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = {"attack1", "attack2", "attack3", "attack4", "attack5"};
	int			nb = rand() % 5;
	if (this->_energyPoints < 25)
	{
		std::cout << "Not enough energy points for attack" << std::endl;
		std::cout << this->_name << "'s EP is: " <<this-> _energyPoints << std::endl;
	}
	else
	{
		this->_energyPoints -= 25;
		std::cout << "Random attack by " << this->_name << " : " << attacks[nb] << " done on " << target << std::endl;
		std::cout << this->_name << "'s EP is: " << this->_energyPoints << std::endl;
	}
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called, deleted: " << this->_name << std::endl;
}
