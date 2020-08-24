/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 17:00:57 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/24 09:45:16 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	// std::cout << "Vaue of _n: " << this->_n << std::endl;
	return ;
}

// 
Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src; // calls assignation operator
	return ;
}

int		Fixed::getRawBits(void) const
{
	// returns the raw value of the fixed point value
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	_n = raw;
}

Fixed& Fixed::operator=(Fixed const & src)
{
	this->_n = src._n;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
