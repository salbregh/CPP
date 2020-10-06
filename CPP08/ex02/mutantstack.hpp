/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 22:19:49 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/06 21:00:25 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <stack>
# include <iostream>
# include <iterator>
# include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T,Container>{
    public:
        MutantStack();
        MutantStack( MutantStack const & src );
        MutantStack &    operator=( MutantStack const & rhs );
        ~MutantStack();

        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        
        iterator begin() {
            return (this->c.begin());
        }
        iterator end() {
            return (this->c.end());
        }
};
        
template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
    return;
}
template <class T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const & src) :
std::stack<T, Container>(src)
{
    return ;
}

template <class T, class Container>
MutantStack<T, Container> &    MutantStack<T, Container>::operator=(MutantStack const &rhs)
{
    if (this != &rhs)
        std::stack<T, Container>::operator=(rhs);
    return(*this);
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack()
{
    return;
}

#endif
