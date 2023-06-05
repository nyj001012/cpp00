/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:17 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 08:40:38 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string command;

	while (true)
	{
		command = std::cin.get();
		std::cout << "command: " << command << std::endl;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			std::cout << "ADD" << std::endl;
		else if (command == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}