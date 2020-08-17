/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 17:41:34 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 17:42:18 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstdio>

int			main(int argc, char **argv)
{
    if (argc == 1)
	{
		std::cout << "* LOUD AN UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int	i, j;
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			putchar(toupper(argv[i][j]));
			j++;
		}
		j = 0;
		i++;
	}	
	return 0;
}
