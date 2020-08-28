/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 11:48:23 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 12:16:23 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include "ClapTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap const &src);
};

#endif
