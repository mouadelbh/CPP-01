/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:36:00 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/13 01:18:18 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
	private:
		std::string in;
		std::string out;
	public:
		Sed(std::string s1, std::string s2);
		~Sed();
		void	ReplaceAndWrite(std::ofstream& newfile, std::string line);
};

#endif
