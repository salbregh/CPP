/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:53:52 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/25 16:53:05 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int>empty; // empty array;
	std::cout << "size of empty array: " << empty.size() << std::endl;
	
    Array<int>intarray(5);
	std::cout << "size of intarray: " << intarray.size() << std::endl;
	for (int i = 0; i < 5; i++)
	{
		intarray[i] = i + 1;
		std::cout << "intarray[" << i << "] : " << intarray[i] << std::endl;
	}

	Array<char>chararray(3);
	for (unsigned int i = 0; i < 3; i++)
	{
		chararray[i] = i + 65;
		std::cout << "chararray[" << i << "] : " << chararray[i] << std::endl;
	}

	Array<char>charcopy = chararray;
	for (unsigned int i = 0; i < charcopy.size(); i++)
		std::cout << "chararray[" << i << "] : " << charcopy[i] << std::endl;
		

    try {
        std::cout << "int[6] gives us: " << intarray[6] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    try {
        std::cout << "int[5] gives us: " << intarray[4] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }

	return (0);
}
