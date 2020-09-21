/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 12:25:53 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:21:26 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include <iostream>
# include "ICharacter.hpp"

class		ICharacter;

class		AMateria
{
	protected:
		std::string		_type;
		unsigned int	_xp;
	public:
		AMateria(void);
		AMateria(std::string const& type);
		virtual ~AMateria(void);
		AMateria(const AMateria	&src);
		AMateria&			operator=(const AMateria &rhs);
		std::string const&	getType(void) const;
		unsigned int		getXP(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
