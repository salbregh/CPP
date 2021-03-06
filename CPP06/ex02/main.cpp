/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 22:47:27 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/27 22:30:56 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identity.hpp"

void	function(void)
{
	srand((unsigned) time(0));
	Base *random;
	random = generate();
	Base& ref = *random;
	
	identity_from_pointer(random);
	identity_from_reference(ref);
	delete random;
}

int		main()
{
	function();
	system("leaks identity");

	return (0);
}
