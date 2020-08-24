/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 09:36:13 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/24 14:24:37 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src; // calls assignation operator
	return ;
}

// FIXXXXXXX
Fixed::Fixed(const int i)
{
	// converts a constant floating point into the fixed point value
	std::cout << "Int constructor called" << std::endl;
	_n = i << _bit; // deelt door 2^8     1 << 8 bitshift
	// std::cout << "_n as fpv is " << _n << std::endl;
}

// FIIXXXXXX
Fixed::Fixed(const float f)
{
	// converts a constant floating point into the fixed point value
	std::cout << "Float constructor called" << std::endl;
	std::cout << roundf(f * (1 << _bit)) << std::endl; //( f * 256);;
	this->_n = f * (1 << _bit);
}

int		Fixed::getRawBits(void) const
{
	// returns the raw value of the fixed point value
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

// FIXXXXXXXX
float	Fixed::toFloat(void)const
{
	// converts the fixed point value to a floating point value
	// shift terug
	float	output;
	output = _n >> _bit;
	std::cout << output << std::endl;
	output = output + float(_bit & 0xFF) / (_n << _bit);
	std::cout << output << std::endl << std::endl;
	// this->_n = output;
	return (output); // bit shift dit
}

// FIXXXXX
int		Fixed::toInt(void)const
{
	// converts the fixed point value to an integer value
	return (this->_n >> _bit); // bitshift dit
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

// string redirection to the standard output
// prints the value of _n on the standard output
std::ostream &	operator<<(std::ostream & o , Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
