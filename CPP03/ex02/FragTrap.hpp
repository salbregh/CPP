/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 08:02:09 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 10:43:15 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{	
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &src);
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
