/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 20:18:46 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/20 15:16:56 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

Data	*deserialize(void *raw)
{
	std::string s1(8, ' ');
	std::string s2(8, ' ');
	Data*		deserialize = new Data;
	char 		*string;
	int			n;
	
	string = (reinterpret_cast<char *>(raw));
	for (int i = 0; i < 8; i++)
	{
		s1[i] = string[i];
		std::cout << i << " : " << s1[i] << std::endl;
	}
	deserialize->s1 = s1; // set the struct of s1
	n = *(static_cast<int *>(raw));
	std::cout << "value of n : " << n << std::endl;
	deserialize->n = n;
	for (int i = 0; i < 8; i++)
	{
		s2[i] = string[i + 12];
		std::cout << i + 12 << " : " << s2[i] << std::endl;
	}
	deserialize->s2 = s2;

	std::cout << deserialize->s1 << std::endl;
	std::cout << deserialize->s2 << std::endl;
	std::cout << deserialize->n << std::endl;
	return (deserialize);
}
