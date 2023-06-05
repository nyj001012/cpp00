/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 12:28:00 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H

#include <iostream>

/**
 * @class Contact
 * @brief Contact class
 */
class Contact
{
	private:
		std::string firstName;		///< First name
		std::string lastName;		///< Last name
		std::string nickname;		///< Nickname
		std::string phoneNumber;	///< Phone number
		std::string darkestSecret;	///< Darkest secret

	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName,
				std::string nickname, std::string phoneNumber,
				std::string darkestSecret);
		~Contact(void);
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickname(void);
		std::string GetPhoneNumber(void);
		std::string GetDarkestSecret(void);
		void SetFirstName(std::string firstName);
		void SetLastName(std::string lastName);
		void SetNickname(std::string nickname);
		void SetPhoneNumber(std::string phoneNumber);
		void SetDarkestSecret(std::string darkestSecret);
};

#endif
