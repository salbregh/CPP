/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 20:35:03 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/24 13:52:59 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
** function template iter, that takes 3 parameters and returns nothing
** 1st argument : address of an array
** 2nd argument : length of the array
** 3rd argument : function that is called on each element of the array
*/

template <typename T>
void	iter(T *array, size_t size, void(*f)(T const &x))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}


// function to print the value
template < typename T >
void 	printit(T const &x)
{
	std::cout << x << std::endl;
}

// function that increments the value by 1
template < typename T >
void	addone(T const &x)
{
	T y = x;
	y++;
	std::cout << y << std::endl;
}

int		main()
{
	char array[] = {'s', 'a', 'n', 'n', 'e'};
	char array1[] = {};
	int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	iter(array, 5, printit);
	iter(array, 5, addone);
	iter(array1, 0, printit);
	iter(array2, 20, addone);
}

// class and main to test for the evaluation, comment out other functions and main when using.

// class	Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() 
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }
// // If everything went well, it should display:
// // 0
// // 1
// // 2
// // 3
// // 4
// // 42
// // 42
// // 42
// // 42
// // 42