/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 14:06:07 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/19 15:07:18 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// executable is called replace, if you run this it changes s1 and s2
// argv 1 is the filename
// argv 2 is string 1
// argv 3 is string 2

// open the file
// put file content into filename.replace
// after replacing s1 for s2 (ALL OCCURENCES)

#include <iostream>
#include <fstream>

// ofstream: stream class to write on files
// ifstream: stream class to read from files
// fstream: streamclass to both read and wirte from/to files

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid ammount of arguments" << std::endl;
		return (0);
	}
	std::string		s1	= argv[2];
	std::cout << s1 << std::endl;
	std::string		s2	= argv[3];
	std::cout << s2 << std::endl;
	
	std::ofstream test(argv[1], std::ofstream::out);
	test << "HAHsasaAHA";
	test.close();
	return (0);
}

// int		main()
// {
// 	// this code creates a file and inserts a sentence into it
// 	// using file stream myfile
// 	std::ofstream myfile;
// 	myfile.open("example.txt"); // change to open argv[1]
// 	myfile << "Writing this into the file \n";
// 	myfile.close();
// 	return (0);
// }