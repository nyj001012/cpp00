/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:06:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 14:57:05 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**
 * @brief Add contact to phonebook
 * @details If phonebook has no capacity, the oldest one will be replaced.
 * @param *phonebook
 * @return void
 */
void AddContact(PhoneBook *phonebook) {
  Contact contact;
  int capacity;
  int index;
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secret;

  capacity = (*phonebook).GetCapacity();
  if (capacity >= 8)
    std::cout << "* PhoneBook has no capacity. The oldest one will be replaced." << std::endl;
  index = capacity % 8;
  std::cout << "Enter first name   : ";
  std::cin >> first_name;
  std::cout << "Enter last name    : ";
  std::cin >> last_name;
  std::cout << "Enter nickname     : ";
  std::cin >> nickname;
  std::cout << "Enter phone_number  : ";
  std::cin >> phone_number;
  std::cout << "Enter darkest_secret: ";
  std::cin >> darkest_secret;
  contact = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
  (*phonebook).SetContact(contact, index);
  (*phonebook).SetCapacity(capacity + 1);
  std::cout << "* Contact created" << std::endl;
}

/**
 * @brief Truncate string
 * @details If the length of the string is more than 10, print only 9 characters and add '.' at the end.
 * @param str
 * @return std::string
 */
std::string Truncate(std::string str) {
  if (str.length() > 10)
    return (str.substr(0, 9) + ".");
  return (str);
}

/**
 * @brief Print contact
 * @details Print contact's first name, last name, nickname, phone number.
 * If the length of the string is more than 10, print only 9 characters and add '.' at the end.
 * The string is right-aligned.
 * @param contact
 * @return void
 */
void PrintContact(Contact contact) {
  std::cout << "|" << std::setw(FIELD_WIDTH) << "First Name" << "|";
  std::cout << std::setw(FIELD_WIDTH) << "Last Name" << "|";
  std::cout << std::setw(FIELD_WIDTH) << "Nickname" << "|";
  std::cout << std::setw(FIELD_WIDTH) << "Phone Number" << "|";
  std::cout << std::endl;
  std::cout << "|" << std::setw(FIELD_WIDTH) << Truncate(contact.GetFirstName()) << "|";
  std::cout << std::setw(FIELD_WIDTH) << Truncate(contact.GetLastName()) << "|";
  std::cout << std::setw(FIELD_WIDTH) << Truncate(contact.GetNickname()) << "|";
  std::cout << std::setw(FIELD_WIDTH) << Truncate(contact.GetPhoneNumber()) << "|";
  std::cout << std::endl;
}

/**
 * @brief Search contact
 * @param phoneBook
 * @return void
 */
void SearchContact(PhoneBook phoneBook) {
  int index;
  Contact contact;

  std::cout << "Enter index: ";
  std::cin >> index;
  if (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(512, '\n');
    std::cout << "* Invalid input" << std::endl;
    return;
  }
  if (index < 1 || index > 8)
    std::cout << "* Index is out of range: " << index << std::endl;
  else {
    contact = phoneBook.GetContact(index - 1);
    PrintContact(contact);
  }
}
