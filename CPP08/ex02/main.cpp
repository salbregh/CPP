/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 22:19:41 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/04 17:23:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main()
{
	MutantStack<int>	mstack;
	
	mstack.push(5);
	mstack.push(17);

	// top returns the top element in the stack
	// the top element is the last element inserted into the stack
	std::cout << "Top element: " << mstack.top() << std::endl;

	// removes the top element of the stack
	std::cout << "Size of stack before pop: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Size of stack after pop: " << mstack.size() << std::endl;
	std::cout << "New top element: " << mstack.top() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// //  [...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}