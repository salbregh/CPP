/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 20:17:30 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/20 15:18:32 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

char 		randomString(void)
{
	char		letter[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	return (letter[rand() % 10]);
}

int			randomInt(void)
{
	char		number[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	return (number[rand() % 10]);
}

// Serialization is the process of converting an object into a stream 
// of bytes to store the object or transmit it to memory, a database, 
// or a file. Its main purpose is to save the state of an object in order 
// to be able to recreate it when needed. The reverse process is called 
// deserialization

void	*serialize(void)
{
	char* s1;
	s1 = new char[20];
	std::cout << "THE RANDOM ARRAY : " ;
	for (int i = 0; i < 8; i++)
	{
		s1[i] = randomString();
		std::cout << s1[i];
	}
	// std::cout << "CHECK S1 : " << s1 << std::endl;
	int	n = randomInt();
	memcpy(s1, &n, sizeof(n)); // memcopy to store int in char array
	std::cout << n;
	for (int i = 12; i < 20; i++)
	{
		s1[i] = randomString();
		std::cout << s1[i];
	}
	std::cout << std::endl;
	return (static_cast<void *>(s1));
}
