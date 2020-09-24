/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialization.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 20:14:09 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/24 11:40:40 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
# define SERIALIZATION_H
# include <iostream>

struct	Data{std::string s1; int n; std::string s2;};

void	*serialize(void);
/* 
** return the address on the heap of a sequence of butes
** that represent a piece of serialized data
** the serielized data is the concatenation of a random
** array of 8 alphanummerical characters, a random integer,
** and a second random array of 8 alphanumerical characters
*/

Data	*deserialize(void *raw);
/*
** will deserialize the raw data to a data structure
** defined as struct Data { std::string s1; int n ; std::string s2}
** allocated on the heap
*/

#endif
