/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 20:18:46 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/24 11:25:13 by salbregh      ########   odam.nl         */
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
		s1[i] = string[i];
	deserialize->s1 = s1;
	n = *(static_cast<int *>(raw) + 2);
	deserialize->n = n;
	for (int i = 0; i < 8; i++)
		s2[i] = string[i + 12];
	deserialize->s2 = s2;
	return (deserialize);
}
