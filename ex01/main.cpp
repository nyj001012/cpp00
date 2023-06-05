/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:17 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 11:39:26 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook	phonebook;

	while (true)
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			AddContact(&phonebook);
		else if (command == "SEARCH")
			SearchContact(phonebook);
		else
			std::cout << "Invalid command: " << command << std::endl;
	}
	return (0);
}