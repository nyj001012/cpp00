/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:27:08 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 12:27:31 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->capacity = 0;
	for (int i = 0; i < 8; i++)
		this->contacts[i] = Contact();
}

PhoneBook::~PhoneBook(void)
{
}

// Getter
Contact	PhoneBook::GetContact(int index)
{
	return (this->contacts[index]);
}

int	PhoneBook::GetCapacity(void)
{
	return (this->capacity);
}

// Setter
void	PhoneBook::SetContact(Contact contact, int index)
{
	this->contacts[index] = contact;
}

void	PhoneBook::SetCapacity(int capacity)
{
	this->capacity = capacity;
}
