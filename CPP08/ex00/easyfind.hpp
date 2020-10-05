/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:04:51 by salbregh      #+#    #+#                 */
/*   Updated: 2020/10/05 12:42:21 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <list>
# include <iterator>
# include <algorithm> 

class NotFoundException : public std::exception
{
	public:
        NotFoundException(void){				
            return ;
        };
        NotFoundException(const NotFoundException &src){
            *this = src;
            return ;
        };
        NotFoundException& operator=(const NotFoundException &rhs){
            (void)rhs;
            return (*this);
        };
        virtual const char* what() const throw(){
            return "Number not found exception";
        };
        ~NotFoundException(void) throw() {
            return ;
        };
};

template <typename T>
typename T::const_iterator    easyfind(T &container, const int findme)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator ite = container.end();
    typename T::const_iterator p = std::find(it, ite, findme);
    if (p == ite)
        throw NotFoundException();
    else
        std::cout << "Number found is: " << *p << std::endl;
    return p;
}

#endif
