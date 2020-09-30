/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 17:59:01 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 13:47:46 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class	SuperTrap :  public FragTrap, public NinjaTrap
{	
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap const &src);
		SuperTrap&	operator=(SuperTrap const &rhs);
};

#endif
