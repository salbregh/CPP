/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stl1.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:18:08 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/25 21:55:12 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class   IOoperation;

int		main()
{
	// std::list (default) creates an empty list of ints
	std::list<int>							list1;
	// std::map constructs a map container object, (default constructs an empty container)
	std::map<std::string, IOoperation*>		map1;
	// std::vector is a sequence container that encapsulates dynamic size arrays
	std::vector<int>						v1;				// empty vector of ints
	std::vector<int>						v2(42, 100);	// 42 ints with value 100
	
	// push_back adds an element to the end of the list
	list1.push_back(1);
	list1.push_back(17);
	list1.push_back(42);

	map1["opA"] = new OperationA; // the element in the map is set to operationA?
	map1["opB"] = new OperationB; // what does this do

	// an iterator is an object that enables you to tracerse a container, particularly lists.
	// const_iterator is a type that provides a bidirectional iterator that can read a const element in a list
	std::list<int>::const_iterator	it; // provides a readonly iterator
	std::list<int>::const_iterator	ite = list1.end(); // return iterator to the end
}
