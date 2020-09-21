/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/08 12:20:01 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/09 11:19:03 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// class		TacticalMarine : public ISpaceMarine
// {
// 	public:
// 		virtual ~TacticalMarine(void);
// 		virtual ISpaceMarine clone() const;
// 		virtual void battleCry() const;
// 		virtual void rangedAttack() const;
// 		virtual void meleeAttack() const;
// };


// upon death display: "Aaargh..."

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

void			TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

ISpaceMarine*	TacticalMarine::clone(void) const
{
	ISpaceMarine* newMarine = new TacticalMarine();
	*newMarine = *this;
	return (newMarine);
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh" << std::endl;
}

