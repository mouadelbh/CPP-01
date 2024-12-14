/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:46:50 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/14 00:38:19 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	print_error(std::string msg)
{
	std::cout << msg << " !\n";
	return (1);
}

int	main(void)
{
	Harl		harl;
	std::string	level;

	std::cout << "Enter the level of your complaint (DEBUG, INFO, WARNING, ERROR) or exit to quit \n";
	while (true)
	{
		std::cout << "Level: ";
		std::cin >> level;
		if (level == "exit" || std::cin.eof() || std::cin.fail())
			break ;
		harl.complain(level);
	}
	print_error("\nExiting program");
	return (0);
}
