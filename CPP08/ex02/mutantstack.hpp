/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 22:19:49 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/04 17:34:55 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <stack>
# include <iostream>
# include <iterator>

template <typename T>
class		MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {
			return ;
		};
		MutantStack<T>(const MutantStack<T> &src) {
			*this = src;
			return ;
		};
		MutantStack<T>&	operator=(const MutantStack<T> &rhs){
			(void)rhs;
			return ;
		};
		~MutantStack(void) {
			return ;
		}
		
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator begin(void) {
			return (this->c.begin());
		}
		iterator end(void) {
			return (this->c.end());
		}

};

#endif
