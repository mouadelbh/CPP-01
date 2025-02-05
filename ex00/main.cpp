/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 05:17:56 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/02/05 16:42:43 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	zombozo("zombozo");
	Zombie	*zombie = newZombie("Foo");
	zombie->announce();
	zombozo.announce();
	randomChump("Chump");
	delete zombie;
	return 0;
}
