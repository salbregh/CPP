/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 22:19:41 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/06 21:04:03 by salbregh      ########   odam.nl         */
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
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	std::cout << "Elements in mstack: ";
	while (it != ite)
	{
		std::cout << *it << ' ';
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	std::cout << "The stack is : ";
	while (!s.empty())
	{
		std::cout << ' ' << s.top();
		s.pop();
	}
	std::cout << std::endl;

	MutantStack<float>	fstack;
	fstack.push(10.1f);
	fstack.push(11.2f);
	MutantStack<float>::iterator itf = fstack.begin();
	MutantStack<float>::iterator itef = fstack.end();
	std::cout << "Elements in fstack: ";
	while (itf != itef)
	{
		std::cout << *itf << ' ';
		++itf;
	}
	std::cout << std::endl;
	std::cout << "TOP IS : " << fstack.top() << std::endl;
	std::cout << "pop the last element that was added" << std::endl;
	fstack.pop();
	std::cout << "TOP IS : " << fstack.top() << std::endl;

	// check assingment operator
	MutantStack<float> fstack2 = fstack;
	std::cout << "TOP OF FSTACK2: " << fstack2.top() << std::endl;

	return (0);
}
