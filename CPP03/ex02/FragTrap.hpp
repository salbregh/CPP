/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 08:02:09 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/16 17:30:20 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{	
	private:
		FragTrap(void);
		
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap&	operator=(FragTrap const &rhs);
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
