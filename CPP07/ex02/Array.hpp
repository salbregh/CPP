/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 14:10:06 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/25 16:28:19 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>
# include <stdexcept>

template < typename T >
class	Array
{
	private:
		unsigned int	_n;
		T*				_array;
		
	public:
		Array(void) : _n(0), _array(NULL){
			return ;
		}
		Array(unsigned int n){
			this->_n = n;
			this->_array = new T[n];
		};
		~Array(void){
			delete [] this->_array;
			return ;
		};
		Array(const Array &src){
			this->_n = src._n;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = src._array[i];
			return ;
		};
		Array& operator=(const Array &rhs){
			delete [] this->_array;
			this->_n = rhs._n;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		};
		unsigned int	size(void) const{
			return (this->_n);
		}
		class OutOfLimitsException : public std::exception
		{
			public:
				OutOfLimitsException(void){
					return ;
				};
				OutOfLimitsException(const OutOfLimitsException &src){
					*this = src;
					return ;
				};
				OutOfLimitsException& operator=(const OutOfLimitsException &rhs){
					(void)rhs;
					return (*this);
				};
				virtual const char* what() const throw(){
					return "Out of limits";
				};
				~OutOfLimitsException(void) throw() {
					return ;
				};
		};
		T& operator[](unsigned int i) const {
			if (i >= this->_n)
				throw OutOfLimitsException();
			return (this->_array[i]);
		};
};

#endif
