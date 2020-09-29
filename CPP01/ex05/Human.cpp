/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 17:01:50 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 13:40:39 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

const Brain&	Human::getBrain(void) const
{
	return (this->_Human);
}

const Brain*	Human::identify(void)
{
	return (_Human.identify());
}
