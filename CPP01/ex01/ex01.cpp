/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:18:04 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/07 12:58:38 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(void)
{
	std::string		*panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

// int		main(void)
// {
// 	memoryLeak();
// 	system("leaks a.out");
// 	return (0);
// }
