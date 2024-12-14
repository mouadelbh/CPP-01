/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:54:08 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/14 00:33:55 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	t_lvls		func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*func[i])();
			return ;
		}
		i++;
	}
	print_error("Invalid level");
}
