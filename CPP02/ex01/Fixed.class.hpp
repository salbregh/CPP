/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 09:36:43 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/03 20:47:20 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_n;
		static const int	_bit = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &src);
        Fixed(const int i);
        Fixed(const float f);
		Fixed &	operator=(Fixed const & rhs);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
        float	toFloat(void)const;
		int		toInt(void)const;

};

std::ostream&	operator<<(std::ostream & o, Fixed const & i);

#endif
