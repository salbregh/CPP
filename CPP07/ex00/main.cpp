/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:03:31 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/22 18:14:13 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T	max(T const & x, T const & y)
{
	return ((x > y) ? x : y);
}

template <typename T>
T	min(T const & x, T const & y)
{
	return ((x < y) ? x : y);
}

template <typename T>
void	swap(T & x, T & y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int		main(void)
{
	int		a = 2;
	int		b = 3;

	::swap(a, b); // a = 3 b = 2
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max ( a, b ) = " << ::max( a, b ) << std::endl;

	std::string		c = "chaine1";
	std::string		d = "chaine2";

	::swap( c, d ); // c = chaine  d = chaine1
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min ( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}

/*
** a = 3, b = 2
** min(a, b) = 2
** max(a, b) = 3
** c = chaine2, d = chaine1
** min(c, d) = chaine1
** max(c, d) = chaine2
*/