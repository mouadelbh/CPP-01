/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 01:38:27 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/12 23:30:43 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << "is armless" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
