/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 08:02:09 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/26 15:02:47 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>

class	FragTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int 	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int 	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangesAttackDamage;
		unsigned int	_armorDamageReduction;
	
	public:
		// default constructor
		FragTrap(std::string name);
		// destructor
		~FragTrap(void);
		// copy constructor
		FragTrap(FragTrap const &src);
		// assignation operator overload
		FragTrap&	operator=(FragTrap const &rhs);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		int			takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
