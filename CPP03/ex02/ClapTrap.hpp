/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 19:33:15 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 12:59:36 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class		ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap&	operator=(ClapTrap const &rhs);
		virtual void		rangedAttack(std::string const & target);
		virtual void		meleeAttack(std::string const & target);
		virtual int			takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		std::string		_classname;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int 	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int 	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
};

#endif
