/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:41:48 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/10 06:56:33 by mel-bouh         ###   ########.fr       */
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
	i = 0;
	delete[] zombie;
	return 0;
}
