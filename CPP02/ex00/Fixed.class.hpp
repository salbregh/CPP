/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 16:56:35 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/23 19:13:07 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>

class	Fixed
{
	private:
		// integer to store the fixed point value
		int					_n;
		// static constant integer to store the number of fractional bits,
		// this constant will always be the litteral 8
		static const int	_bit;

	public:
		// default constructor that initializes the fixed point value to 0
		Fixed(void);
		// destructor
		~Fixed(void);
		// a copy consructor
		Fixed(Fixed const & src);
		// an assignation operator overload
		Fixed &	operator=(Fixed const & rhs);
		// member function int getRawBits(void) const; that returns the raw value of the fixed point value
		int	getRawBits(void)const;
		// member function void setRawBits(inst const raw); that sets the raw value of the fixed point value
		int	setRawBits(int const raw);
};


#endif