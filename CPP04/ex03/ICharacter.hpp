/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 14:36:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/09 15:12:59 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H
# include <iostream>
# include "AMateria.hpp"

class	AMateria;

class	ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual	std::string const& getName() const = 0;
		virtual void 				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
