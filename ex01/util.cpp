/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:06:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 11:33:00 by yena             ###   ########.fr       */
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
