/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:06:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 12:01:54 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief Add contact to phonebook
 * @details If phonebook has no capacity, the oldest one will be replaced.
 * @param phonebook
 * @return void
 */
void	AddContact(PhoneBook &phonebook)
{
	Contact	contact;
	int		capacity;
	int		index;

	capacity = phonebook.GetCapacity();
	if (capacity > 8)
		std::cout << "PhoneBook has no capacity. The oldest one will be replaced." << std::endl;
	index = capacity % 8;
	contact = (*phonebook).getContact(index);
	std::cout << "Enter first name\t: ";
	std::cin >> contact.firstName;
	std::cout << "Enter last name\t: ";
	std::cin >> contact.lastName;
	std::cout << "Enter nickname\t: ";
	std::cin >> contact.nickname;
	std::cout << "Enter phone_number\t: ";
	std::cin >> contact.phoneNumber;
	std::cout << "Enter darkest_secret\t: ";
	std::cin >> contact.darkestSecret;
	(*phonebook).setContact(index, contact);
	(*phonebook).setCapacity(capacity + 1);
}

/**
 * @brief Truncate string
 * @details If the length of the string is more than 10, print only 9 characters and add '.' at the end.
 * @param str
 * @return std::string
 */

std::string	Truncate(std::string str)
{
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
void	PrintContact(Contact contact)
{
	std::cout << "|" << std::setw(COLUMN_WIDTH) << "First Name" << "|";
	std::cout << std::setw(COLUMN_WIDTH) << "Last Name" << "|";
	std::cout << std::setw(COLUMN_WIDTH) << "Nickname" << "|";
	std::cout << std::setw(COLUMN_WIDTH) << "Phone Number" << "|" << std::endl;
	std::cout << "|" << std::setw(FIELD_WIDTH) << Truncate(contact.firstName) << "|";
	std::cout << "|" << std::setw(FIELD_WIDTH) << Truncate(contact.lastName) << "|";
	std::cout << "|" << std::setw(FIELD_WIDTH) << Truncate(contact.nickname) << "|";
	std::cout << "|" << std::setw(FIELD_WIDTH) << Truncate(contact.phone_number) << "|";
}

/**
 * @brief Search contact
 * @param phoneBook
 * @return void
 */
void	SearchContact(PhoneBook phoneBook)
{
	int		index;
	Contact	contact;

	std::cout << "Enter index:"
	std::cin >> index;
	if (index < 0 || index > 7)
		std::cout << "Index is out of range: " << index << std::endl;
	else
	{
		contact = phoneBook.getContact(index);
		PrintContact(contact);
	}
}
