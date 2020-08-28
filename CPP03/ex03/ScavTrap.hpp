/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:25:37 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 12:14:54 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class		ScavTrap : public ClapTrap 
{	
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap&	operator=(ScavTrap const &rhs);
		void		challengeNewcomer(void);
};

#endif
