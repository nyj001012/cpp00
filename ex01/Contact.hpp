/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/05 11:35:30 by yena             ###   ########.fr       */
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

Contact::Contact(void)
{

}

Contact::Contact(std::string firstName, std::string lastName,
				 std::string nickname, std::string phoneNumber,
				 std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{

}

// Getter
std::string Contact::GetFirstName(void)
{
	return (this->firstName);
}

std::string Contact::GetLastName(void)
{
	return (this->lastName);
}

std::string Contact::GetNickname(void)
{
	return (this->nickname);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->darkestSecret);
}

// Setter
void	Contact::SetFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::SetLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::SetNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::SetPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::SetDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

#endif
