/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:52:33 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/11 23:58:13 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of the string variable: " << &string << std::endl;
	std::cout << "Address held by pointer variable: " << stringPTR << std::endl;
	std::cout << "Address held by reference variable: " << &stringREF << std::endl;
	std::cout << "String variable: " << string << std::endl;
	std::cout << "String variable through pointer: " << *stringPTR << std::endl;
	std::cout << "String variable through reference: " << stringREF << std::endl;
}
