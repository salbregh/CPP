/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 09:36:13 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/24 21:21:08 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _n(0) 
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int value)
{
	this->_n = value << _bit; // bitshift 8, multiplies by 2^8 (1 << 8)
	// explanation on <<
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->_n = roundf(f * (1 << _bit)); // needed to bitshift float
	// explanation on <<
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

float	Fixed::toFloat(void) const 
{
	float	toFloat;
	toFloat = (this->_n >> _bit);
	toFloat = toFloat + (float)(this->_n & 0xFF) / (1 << _bit); 
	// explanation on 0xFF and <<
	return (toFloat);
}

int		Fixed::toInt(void) const 
{
	return (this->_n >> _bit);
}

int	Fixed::getRawBits(void) const 
{
	return this->_n;
}

void	Fixed::setRawBits(int const raw) 
{
	this->_n = raw;
}

Fixed&	Fixed::operator=(const Fixed& rhs) 
{
	std::cout << "Assignation operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& i)
{
	out << i.toFloat();
	return out;
}
