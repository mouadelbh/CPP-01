/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:13:54 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/13 01:38:08 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string s1, std::string s2)
{
	in = s1;
	out = s2;
}

Sed::~Sed()
{
}

void	Sed::ReplaceAndWrite(std::ofstream& newfile, std::string line)
{
	std::string new_line;
	size_t		pos = 0;
	size_t		i = 0;
	size_t		len = in.length();

	while (pos < line.length())
	{
		pos = line.find(in, pos);
		if (pos == std::string::npos)
		{
			newfile << line.substr(i);
			break ;
		}
		new_line = line.substr(i, pos - i);
		newfile << new_line;
		newfile << out;
		pos += len;
		i = pos;
	}
}
