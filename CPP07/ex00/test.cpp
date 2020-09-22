/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 17:57:42 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/22 18:01:26 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


// template definition
template <typename T>
T	max(T const & x, T const & y)
{
	return ((x > y) ? x : y);
}