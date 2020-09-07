/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 11:18:10 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/04 13:42:55 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H
# include <iostream>
# include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(void);
		virtual ~Peon(void);
		Peon(Peon const &src);
		Peon&	operator=(Peon const &rhs);
};

#endif
