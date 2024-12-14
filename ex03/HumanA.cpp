/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 01:34:41 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/12 23:22:24 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon)
{
	_name = name;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

