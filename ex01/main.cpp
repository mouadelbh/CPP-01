/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:41:48 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/02/05 16:53:57 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie = zombieHorde(5, "Zomboid");
	int i = 0;
	while (i < 5)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return 0;
}
