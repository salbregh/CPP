/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 14:01:32 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/02 15:58:26 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{
	std::list<int>container1;
	container1.push_back(10);
	container1.push_back(12);
	container1.push_back(14);
	container1.push_back(16);
	container1.push_back(18);
	try {
		std::cout << "Try to find 1 in cointainer 1" << std::endl;
		easyfind(container1, 1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "Try to find 10 in cointainer 1" << std::endl;
		easyfind(container1, 10);
	}
	catch (std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	std::list<int>container2;
	container2.push_back(0);
	try {
		std::cout << "Try to find 0 in cointainer 2" << std::endl;
		easyfind(container2, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::list<int>container3;
	try {
		std::cout << "Try to find 0 in cointainer 3" << std::endl;
		easyfind(container3, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}