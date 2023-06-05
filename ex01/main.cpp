/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:17 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 09:00:29 by yena             ###   ########.fr       */
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
		std::cout << "Enter command: ";
		std::cin >> command;
		switch (command)
		{
			case "ADD":
				std::cout << "ADD" << std::endl;
				break ;
			case "SEARCH":
				std::cout << "SEARCH" << std::endl;
				break ;
			case "EXIT":
				std::cout << "EXIT" << std::endl;
				break ;
			default:
				std::cout << "Invalid command: " << command << std::endl;
				break ;
		}
	}
	return (0);
}