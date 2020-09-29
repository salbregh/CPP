/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 20:17:30 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/24 16:26:00 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

char 		randomString(void)
{
	char		letter[36] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
							'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
							'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3',
							'4', '5', '6', '7', '8', '9'};
	return (letter[rand() % 36]);
}

/* 
** Serialization is the process of converting an object into a stream 
** of bytes to store the object or transmit it to memory, a database, 
** or a file. Its main purpose is to save the state of an object in order 
** to be able to recreate it when needed. The reverse process is called 
** deserialization
*/

void	*serialize(void)
{
	char* s1;
	s1 = new char[20];
	for (int i = 0; i < 8; i++)
	{
		s1[i] = randomString();
		std::cout << s1[i];
	}
	int	n = rand();
	std::cout << n;
	memcpy(s1 + 8, &n, sizeof(n)); // memcopy to store int in char array
	for (int i = 12; i < 20; i++)
	{
		s1[i] = randomString();
		std::cout << s1[i];
	}
	std::cout << std::endl;
	return (static_cast<void *>(s1));
}
