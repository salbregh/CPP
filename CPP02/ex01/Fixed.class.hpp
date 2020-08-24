/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 09:36:43 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/24 12:41:11 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		// integer to store the fixed point value
		int					_n;
		// static constant integer to store the number of fractional bits,
		// this constant will always be the litteral 8
		static const int	_bit = 8;

	public:
		// default constructor that initializes the fixed point value to 0
		Fixed(void);
		// destructor
		~Fixed(void);
		// a copy consructor
		Fixed(Fixed const & src);
        // construtor that converts a constant integer to the correspondant fixed(8) point value
        Fixed(const int i); // of moet i _n zijn?
        // constructor that converts a constant floating point into the fixed point value
        Fixed(const float f);
		// an assignation operator overload
		Fixed &	operator=(Fixed const & rhs);
		// member function int getRawBits(void) const; that returns the raw value of the fixed point value
		int		getRawBits(void)const;
		// member function void setRawBits(inst const raw); that sets the raw value of the fixed point value
		void	setRawBits(int const raw);
        // member function that converts the fixed point value to a floating point value
        float	toFloat(void)const;
		// member function that cconverts the fixed point value to an integer value
		int		toInt(void)const;

};

std::ostream&	operator<<(std::ostream & o, Fixed const & i);

#endif
