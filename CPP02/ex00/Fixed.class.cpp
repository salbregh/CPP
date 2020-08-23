/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 17:00:57 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/23 19:16:15 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Vaue of _n: " << this->_n << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	// in  copy getter gebruiken
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// int		Fixed::getRawBits(void) const
// {
	
// }

Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Assignation operator called from " << this->_n << std::endl;
	this->_n = src._n;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}