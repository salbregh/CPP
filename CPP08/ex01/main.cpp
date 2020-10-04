/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 17:00:22 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/03 21:58:43 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.showContainer();

	// shortest span is 2
	std::cout << "SHORTEST SPAN: "; 
	std::cout << sp.shortestSpan() << std::endl;
	// longest span is 14
	std::cout << "LONGEST SPAN: ";
	std::cout << sp.longestSpan() << std::endl;


	Span sp2 = Span(3);
	sp2.addNumber(0);
	sp2.addNumber(0);
	sp2.addNumber(0);
	sp2.showContainer();
	try {
	std::cout << "LONGEST SPAN: " ;
	std::cout << sp2.longestSpan() << std::endl; }
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
	std::cout << "SHORTEST SPAN: ";
	std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Span sp3 = Span(1);
	sp3.addNumber(10000);
	sp3.showContainer();
	try {
		std::cout << "LONGEST SPAN: ";
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "SHORTEST SPAN: ";
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Span sp4 = Span(4);
	sp4.addNumber(1010);
	sp4.addNumber(1);
	sp4.addNumber(100000);
	sp4.addNumber(88);
	sp4.showContainer();
	try {
		std::cout << "LONGEST SPAN: ";
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "SHORTEST SPAN: ";
		std::cout << sp4.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}