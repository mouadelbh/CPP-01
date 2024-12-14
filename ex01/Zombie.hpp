/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:42:08 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/10 06:54:45 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif
