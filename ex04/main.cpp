/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 04:32:47 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/02/05 17:22:08 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	print_error(std::string msg)
{
	std::cout << msg << " !\n";
	return (1);
}

int main(int ac, char **av)
{
	std::string	line;
	std::string	file_name;
	std::string	newfile_name;
	Sed sed(av[2], av[3]);

	if (ac != 4)
		return (print_error("This program takes 3 arguments"));
	file_name = std::string(av[1]);
	newfile_name = file_name + ".replace";
	std::ifstream	file(file_name.c_str());
	if (!file)
		return (print_error("Error opening " + file_name));
	std::ofstream	newfile(newfile_name.c_str());
	if (!newfile)
		return (print_error("Error opening " + newfile_name));
	while (std::getline(file, line))
	{
		sed.ReplaceAndWrite(newfile, line);
		if (!file.eof())
			newfile << std::endl;
	}
	file.close();
	newfile.close();
	return (0);
}
