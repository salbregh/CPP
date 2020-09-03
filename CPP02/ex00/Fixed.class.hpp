/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 16:56:35 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/03 22:01:34 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>

class	Fixed
{
	private:
		int					_n;
		static const int	_bit = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &src);
		Fixed&	operator=(Fixed const &rhs);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

#endif
