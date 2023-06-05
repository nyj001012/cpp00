/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 11:35:26 by yena             ###   ########.fr       */
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
		std::string first_name;		///< First name
		std::string last_name;		///< Last name
		std::string nickname;		///< Nickname
		std::string phone_number;	///< Phone number
		std::string darkest_secret;	///< Darkest secret

	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name,
				std::string nickname, std::string phone_number,
				std::string darkest_secret);
		~Contact(void);
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickname(void);
		std::string GetPhoneNumber(void);
		std::string GetDarkestSecret(void);
		void SetFirstName(std::string first_name);
		void SetLastName(std::string last_name);
		void SetNickname(std::string nickname);
		void SetPhoneNumber(std::string phone_number);
		void SetDarkestSecret(std::string darkest_secret);
};

Contact::Contact(void)
{

}

Contact::Contact(std::string first_name, std::string last_name,
				 std::string nickname, std::string phone_number,
				 std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{

}

// Getter
std::string Contact::GetFirstName(void)
{
	return (this->first_name);
}

std::string Contact::GetLastName(void)
{
	return (this->last_name);
}

std::string Contact::GetNickname(void)
{
	return (this->nickname);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->phone_number);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->darkest_secret);
}

// Setter
void	Contact::SetFirstName(std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::SetLastName(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::SetNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::SetPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::SetDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

#endif
