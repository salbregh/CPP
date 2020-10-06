/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 16:59:27 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/06 20:58:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	this->_container.reserve(_N);
	return ;
}

Span::Span(const Span &src)
{
	*this = src;
	return ;
}

Span&		Span::operator=(const Span &rhs)
{
	this->_N = rhs._N;
	this->_container = rhs._container;
	return (*this);
}

void		Span::addNumber(int n)
{
	if (_container.size() >= this->_N)
		throw ContainerFullException();
	_container.push_back(n);
	return ;
}

long			Span::longestSpan(void)
{
	if (this->_N <= 1)
		throw NoSpanException();
	long		min = *min_element(_container.begin(), _container.end());
	long		max = *max_element(_container.begin(), _container.end());
	long		check = max - min;
	return  (check);
}
		
long			Span::shortestSpan(void)
{
	if (this->_N <= 1)
		throw NoSpanException();
	std::vector<int>::iterator it = this->_container.begin();
	std::vector<int>::iterator ite = this->_container.end();
	long		check = INT_MAX;
	long		range = INT_MAX;

	while (it < ite)
	{
		for (std::vector<int>::iterator itcheck = _container.begin(); itcheck < ite; itcheck++)
		{
			if (*itcheck == *it)
				continue ;
			else if (*itcheck < *it)
				check = static_cast<long>(*it) - static_cast<long>(*itcheck);
			else if (*itcheck > *it)
				check = static_cast<long>(*itcheck) - static_cast<long>(*it);
			if (check < range || range == INT_MAX)
				range = check;
		}
		if (check == INT_MAX)
			return (0);
		it++;
	}
	return range;
}

void	Span::showContainer(void) const
{
	std::vector<int>::const_iterator it = this->_container.begin();
	std::vector<int>::const_iterator ite = this->_container.end();
	std::cout << "This is in your container: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

Span::~Span(void)
{
	return ;
}

const char* Span::NoSpanException::what() const throw()
{
	return "No span";
}

Span::NoSpanException::NoSpanException(void) throw()
{
	return ;
}

Span::NoSpanException::NoSpanException(const NoSpanException &src) throw()
{
	*this = src;
	return ;
}

Span::NoSpanException&	Span::NoSpanException::operator=(const NoSpanException &rhs) throw()
{
	(void)rhs;
	return (*this);
}

Span::NoSpanException::~NoSpanException(void) throw()
{
	return ;
}

Span::NoSpaceException::NoSpaceException(void) throw()
{
	return ;
}

Span::NoSpaceException::NoSpaceException(const NoSpaceException &src) throw()
{
	*this = src;
	return ;
}

Span::NoSpaceException&	Span::NoSpaceException::operator=(const NoSpaceException &rhs) throw()
{
	(void)rhs;
	return (*this);
}

Span::NoSpaceException::~NoSpaceException(void) throw()
{
	return ;
}

const char* Span::NoSpaceException::what() const throw()
{
	return "No space";
}

Span::ContainerFullException::ContainerFullException(void) throw()
{
	return ;
}

Span::ContainerFullException::ContainerFullException(const ContainerFullException &src) throw()
{
	*this = src;
	return ;
}

Span::ContainerFullException&	Span::ContainerFullException::operator=(const ContainerFullException &rhs) throw()
{
	(void)rhs;
	return (*this);
}

Span::ContainerFullException::~ContainerFullException(void) throw()
{
	return ;
}

const char* Span::ContainerFullException::what() const throw()
{
	return "Container is full";
}
