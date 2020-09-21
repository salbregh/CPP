/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 13:10:44 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 15:59:24 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class	Cure : public AMateria
{
	// prica xp ?
	public:
		Cure(void);
		virtual ~Cure(void);
		Cure(Cure const &src);
		Cure&	operator=(Cure const &rhs);
		virtual Cure*	clone(void) const;
		virtual void	use(ICharacter& target);
};		

#endif
