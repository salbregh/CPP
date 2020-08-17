/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 17:54:34 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:11:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	PonyOnTheHeap(void)
{
	Pony	*HeapPony = new Pony("Bob", "PINK", 1);
	delete HeapPony;
}

void	PonyOnTheStack(void)
{
	Pony	StackPony = Pony("Harry", "Purple", 3);
}

int		main(void)
{
	PonyOnTheHeap();
	PonyOnTheStack();
	// system("leaks a.out");
	return (0);
}