/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 17:00:22 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/06 20:58:28 by salbregh      ########   odam.nl         */
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

	std::cout << "SHORTEST SPAN: "; 
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "LONGEST SPAN: ";
	std::cout << sp.longestSpan() << std::endl << std::endl;

	Span max = Span(2);
	max.addNumber(INT_MIN);
	max.addNumber(INT_MAX);
	max.showContainer();
	try {
	std::cout << "LONGEST SPAN: " ;
	std::cout << max.longestSpan() << std::endl; }
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
	std::cout << "SHORTEST SPAN: ";
	std::cout << max.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

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
	std::cout << std::endl;

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
	std::cout << std::endl;

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
	std::cout << std::endl;

	Span sp5 = Span(11000);
	std::vector<int> waytoobig;
	srand(time(0));
	for (int i = 0; i < 11000; i++)
		waytoobig.push_back(rand());
	try {
		sp5.addNumber(waytoobig.begin(), waytoobig.end());
		// sp5.showContainer();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		Span sp6 = Span(11);
		std::cout << "Check too big: " << std::endl;
		std::vector<int> checktobig(12);
		sp6.addNumber(checktobig.begin(), checktobig.end());
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Try adding one more number tot the full sp5" << std::endl;
		sp5.addNumber(1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "LONGEST SPAN: ";
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "SHORTEST SPAN: ";
		std::cout << sp5.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
