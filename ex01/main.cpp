/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:17 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 14:57:15 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void) {
  std::string command = "";
  PhoneBook phonebook = PhoneBook();

  while (true) {
    std::cout << "\033[0;35m[ INPUT ]\033[0m * Enter command: ";
    std::cin >> command;
    if (command == "EXIT")
      break;
    else if (command == "ADD")
      AddContact(&phonebook);
    else if (command == "SEARCH")
      SearchContact(phonebook);
    else
      std::cout << "\033[0;31m* Invalid command: \033[0m" << command << std::endl;
  }
  return (0);
}