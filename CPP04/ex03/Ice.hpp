/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 12:58:13 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:03:03 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

	// private:
	// 	std::string		_type;
	// 	unsigned int	_xp;

	// public:
	// 	AMateria(void);
	// 	AMateria(std::string const& type);
	// 	// [...]
	// 	virtual ~AMateria();
		
	// 	std::string const&	getType(void) const;
	// 	// returns the materia type
	// 	unsigned int		getXP(void) const;
	// 	// returns the materia's XP

	// 	virtual AMateria*	clone(void) const = 0;
	// 	virtual void		use(ICharacter& target);

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		virtual ~Ice(void);
		Ice(Ice const &src);
		Ice&	operator=(Ice const &rhs);
		virtual Ice*	clone(void) const;
		virtual void	use(ICharacter& target);
};

#endif
