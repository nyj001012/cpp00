/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:45 by yena              #+#    #+#             */
/*   Updated: 2023/05/31 14:55:38 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];

	public:
		PhoneBook(Contact contact, int index);
		~PhoneBook(void);
};

PhoneBook::PhoneBook(void)
{
	for (int i = 0; i < 8; i++)
	{
		this->contacts[i] = new Contact();
	}
}

PhoneBook::PhoneBook(Contact contact, int index)
{
	this->contacts[index] = contact;
}

PhoneBook::~PhoneBook(void)
{

}
#endif
