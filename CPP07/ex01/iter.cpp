/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 20:35:03 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/22 20:42:42 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// function template iter, that takes 3 parameters and returns nothing
// 1st argument : address of an array
// 2nd argument : length of the array
// 3rd function that is called on each element of the array

template <typename T>
{
	iter()
}

class	Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can’t write int[] tab. Wouldn’t that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}
// If everything went well, it should display:
// 0
// 1
// 2
// 3
// 4
// 42
// 42
// 42
// 42
// 42