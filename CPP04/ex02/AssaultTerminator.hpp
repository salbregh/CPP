/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/08 12:05:35 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/08 15:27:15 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H
# include "ISpaceMarine.hpp"

class		AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		~AssaultTerminator(void);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

// clone returns a copy of the current object
// upon creation display: "* teleports from space *"
// battleCry displays: "This code is unclean. PURIFY IT!"
// rangedAttack displays: "* does nothing *"
// meleeAttack displays: "* attacks with chainfists*"
// upon death display: "I'll be back..."

#endif
