/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:45 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 11:37:17 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H

#include "Contact.hpp"

/**
 * @class PhoneBook
 * @brief PhoneBook class
 */
class PhoneBook
{
	private:
		Contact	contacts[8];	///< Contacts
		int		capacity;		///< Capacity of PhoneBook. If capacity is 8, PhoneBook is full.

	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact	GetContact(int index);
		int		GetCapacity(void);
		void	SetContact(Contact contact, int index);
		void	SetCapacity(int index);
};

#endif
