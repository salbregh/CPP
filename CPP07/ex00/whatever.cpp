/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 18:20:44 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/22 20:32:52 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T	max(T const & x, T const & y)
{
	return ((x > y) ? x : y);
}

template <typename T>
T	min(T const & x, T const & y)
{
	return ((x < y) ? x : y);
}

template <typename T>
void	swap(T & x, T & y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

class   Awesome 
{
    public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
		void 	print_n(void) { std::cout << this->_n << std::endl; } 
		int		get_n(void) { return (this->_n); }
	private:
		int _n;
};

std::ostream	&operator<<(std::ostream &o, Awesome &a)
{
	o << a.get_n() << std::endl;
	return (o);
}

int		main(void)
{
	int		a = 2;
	int		b = 3;

	::swap(a, b); // a = 3, b = 2
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max ( a, b ) = " << ::max( a, b ) << std::endl;

	std::string		c = "chaine1";
	std::string		d = "chaine2";

	::swap( c, d ); // c = chaine, d = chaine1
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min ( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Awesome test1(1);
	Awesome	test2(2);

	std::cout << "value of test1: " << test1.get_n() << std::endl;
	std::cout << "value of test2: " << test2.get_n() << std::endl;

	::swap (test1, test2); // test1 = 2, test 2 = 1
	std::cout << "value of test1: " << test1.get_n() << std::endl;
	std::cout << "value of test2: " << test2.get_n() << std::endl;

	std::cout << "min ( test1, test2 ) = " << ::min( test1.get_n() , test2.get_n() ) << std::endl;
	std::cout << "max( test1, test2 ) = " << ::max( test1.get_n(), test2.get_n() ) << std::endl;

	return (0);
}
