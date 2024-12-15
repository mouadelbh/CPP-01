/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:45:05 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/15 05:52:52 by mel-bouh         ###   ########.fr       */
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
