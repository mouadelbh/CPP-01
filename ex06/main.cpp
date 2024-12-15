/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:45:51 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/15 05:57:37 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	print_error(std::string msg)
{
	std::cout << msg << " !\n";
	return (1);
}

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	level;

	if (ac != 2)
		return (print_error("Harl Takes 2 Arguments"));
	level = std::string(av[1]);
	harl.complain(level);
	return (0);
}
