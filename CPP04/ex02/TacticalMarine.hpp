/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/08 11:59:39 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/08 12:21:44 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H
# include "ISpaceMarine.hpp"

class		TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		virtual ~TacticalMarine(void);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

// clone returns a copy of the current object
// upon creatin display: "Tactical Marine ready for battle!"
// battleCry displays: "For the holy PLOT!"
// rangedAttack displays: "* attacks with a bolter *"
// meleeAttack displays: "* attacks with a chainsword *"
// upon death display: "Aaargh..."


#endif
