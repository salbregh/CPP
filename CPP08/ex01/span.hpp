/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 16:59:35 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/06 18:23:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>
# include <float.h>

class		Span
{
	private:
		unsigned int		_N;
		std::vector<int> 	_container;
		Span(void);
	public:
		Span(unsigned int N);
		Span(const Span &src);
		Span&	operator=(const Span &rhs);
		~Span(void);
		void		addNumber(int n);
		long		longestSpan(void);
		long		shortestSpan(void);
		void		showContainer(void) const;
		
		class NoSpanException : public std::exception
		{
			public:
				NoSpanException(void) throw();
				NoSpanException(const NoSpanException &src) throw();
				NoSpanException&	operator=(const NoSpanException &rhs) throw();
				~NoSpanException(void) throw();
				virtual const char* what() const throw();
		};
		
		class ContainerFullException : public std::exception
		{
			public:
				ContainerFullException(void) throw();
				ContainerFullException(const ContainerFullException &src) throw();
				ContainerFullException& operator=(const ContainerFullException &rhs) throw();
				~ContainerFullException(void) throw();
				virtual const char* what() const throw();
		};

		class NoSpaceException : public std::exception
		{
			public:
				NoSpaceException(void) throw();
				NoSpaceException(const NoSpaceException &src) throw();
				NoSpaceException&	operator=(const NoSpaceException &rhs) throw();
				~NoSpaceException(void) throw();
				virtual const char* what() const throw();
		};
		
		template <typename S>
		void	addNumber(S begin, S end){
			if (std::distance(begin, end) + this->_container.size() > this->_N)
				throw NoSpaceException();
			this->_container.insert(this->_container.end(), begin, end);
		}
};

#endif
