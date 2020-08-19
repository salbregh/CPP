/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 17:01:50 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/18 17:27:54 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

const Brain&	Human::getBrain(void) const
{
	return (this->_Human);
}

const Brain*	Human::identify(void)
{
	return (_Human.identify());
}
