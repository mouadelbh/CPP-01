/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:49:25 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/02/05 17:39:19 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

int	print_error(std::string msg);

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		void	complain(std::string level);
};

#endif
