/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 14:09:02 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/20 15:08:24 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int		main()
{
	srand(time(NULL));
	void *ser;
	ser = serialize();
	Data *data;
	data = deserialize(ser);
	std::cout << "Value of s1 : " << data->s1 << std::endl;
	std::cout << "Value of s2 : " << data->s2 << std::endl;
	std::cout << "Value of n: " << data->n << std::endl;
	system("leaks serialization");
	return (0);
}