/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/08 13:56:58 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/09 11:20:01 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

        // Squad(void);
        // virtual ~Squad(void);
        // virtual int             getCount(void) const;
        // virtual ISpaceMarine*   getUnit(int N) const;
        // virtual int             push(ISpaceMarine* spacemarine);

#include "Squad.hpp"

Squad::Squad(void)
{
	int i = 0;
	while (i < 100)
	{
		this->_array[i] = NULL;
		i++;
	}
	return ;
}

int				Squad::getCount(void) const
{
	int i = 0;
	while (this->_array[i] != NULL)
		i++;
	return i;
}

ISpaceMarine*	Squad::getUnit(int N) const
{
	return (this->_array[N]);
}

int				Squad::push(ISpaceMarine* spacemarine)
{
	int i = getCount();
	this->_array[i] = spacemarine;
	return 0;
}

Squad::~Squad(void)
{
	for (int i = 0; i < getCount(); i++)
		delete this->_array[i];
	return ;
}