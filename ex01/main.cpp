/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:03:29 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 09:03:52 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:17 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 09:03:29 by yena             ###   ########.fr       */#.fr       */
=======
/*   Updated: 2023/06/05 08:55:33 by yena             ###   ########.fr       */
>>>>>>> parent of 184bbc3 (chore: change if-else to switch-case)
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
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			std::cout << "ADD" << std::endl;
		else if (command == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else
			std::cout << "Invalid command: " << command << std::endl;
	}
	return (0);
}