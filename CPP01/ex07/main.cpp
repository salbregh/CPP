/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 14:06:07 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/29 16:42:08 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int argc, char **argv)
{
	std::string		str;
	std::string		newstr;

	if (argc != 4)
	{
		std::cout << "Invalid ammount of arguments" << std::endl;
		return (0);
	}

	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	ifs(argv[1]); // input stream to operate on files
	std::string		name = argv[1] + (std::string)".replacement";

	if (!ifs.is_open()) // check is the file of argv[1] is there
		return (-1);
	std::ofstream ofs(name); // output stream so the .replacement file
	if (!ofs.is_open()) // check if the ofs file is open
		return (-1);
	while (getline(ifs, str)) // read all the lines in the ifs
	{
		newstr.append(str);
		if (!ifs.eof())
			newstr.append("\n");
	}
	// newstr holds the content of the test file
	int		i = 0;
	size_t 	j = 0;
	while ((j = newstr.find(s1, i)) != std::string::npos) // npos looks until the end of the string
	{
		newstr.replace(j, s1.length(), s2);
		i = j + s2.length();
	}
	// replaces all occurence of s1 with s2
	ofs << newstr;
	// put the value of newstr in the new .replacement file
	ifs.close();
	ofs.close();
	return (0);
}
