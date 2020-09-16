/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 11:48:23 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/16 17:31:17 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	private:
		NinjaTrap(void);
		
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap const &src);
		NinjaTrap&	operator=(NinjaTrap const &rhs);
		void	ninjaShoebox(FragTrap &attack);
		void	ninjaShoebox(ScavTrap &attack);
		void	ninjaShoebox(NinjaTrap &attack);
};

#endif
