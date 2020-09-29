/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:20:52 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 13:41:53 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_IQ = 130;
	std::cout << "Brain constructed with an IQ of " << this->_IQ << std::endl;
	return ;
}

Brain::~Brain(void)
{
	return ;
}

const Brain*	Brain::identify(void) const
{
	return (this);
}
