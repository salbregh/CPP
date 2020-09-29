/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 15:53:56 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 13:34:08 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	brain(void)
{
	std::string		Brain;

	Brain = "HI THIS IS BRAIN";

	std::string*	BrainPointer = &Brain;
	std::cout << *BrainPointer << std::endl;

	std::string&	BrainReference = Brain;
	std::cout << BrainReference << std::endl;
}

int		main(void)
{
	brain();
	// system("leaks a.out");
	return (0);
}
