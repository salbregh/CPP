/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/08 12:15:59 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/08 13:46:15 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

ISpaceMarine*       AssaultTerminator::clone(void) const
{
    ISpaceMarine* newMarine = new AssaultTerminator;
	*newMarine = *this;
	return (newMarine);
}

void				AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists*" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return ;
}



// class		AssaultTerminator : public ISpaceMarine
// {
// 	public:
// 		virtual ~AssaultTerminator(void);
// 		virtual ISpaceMarine clone() const;
// 		virtual void battleCry() const;
// 		virtual void rangedAttack() const;
// 		virtual void meleeAttack() const;
// };